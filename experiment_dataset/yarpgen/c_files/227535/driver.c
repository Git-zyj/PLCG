#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 652864250U;
long long int var_1 = -6123147334158226342LL;
unsigned int var_2 = 3129212347U;
int var_5 = 1202289312;
short var_13 = (short)26079;
unsigned int var_14 = 955651063U;
int zero = 0;
unsigned int var_16 = 1062596850U;
unsigned int var_17 = 1170148343U;
unsigned char var_18 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
