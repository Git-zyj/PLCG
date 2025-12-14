#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
short var_2 = (short)15076;
unsigned short var_4 = (unsigned short)59478;
int zero = 0;
unsigned int var_12 = 1159971858U;
signed char var_13 = (signed char)34;
unsigned long long int var_14 = 2271022751125550074ULL;
short var_15 = (short)3344;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
