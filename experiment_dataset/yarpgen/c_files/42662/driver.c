#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21401;
short var_8 = (short)30944;
unsigned int var_9 = 3228371066U;
unsigned int var_10 = 3896495370U;
long long int var_11 = 5912174439710581307LL;
unsigned short var_12 = (unsigned short)4716;
int zero = 0;
unsigned int var_13 = 1932242339U;
unsigned char var_14 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
