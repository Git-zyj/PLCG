#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1627355870;
unsigned int var_5 = 1531229182U;
unsigned char var_6 = (unsigned char)207;
unsigned char var_11 = (unsigned char)234;
int zero = 0;
unsigned char var_15 = (unsigned char)212;
short var_16 = (short)9019;
unsigned int var_17 = 3374589603U;
int var_18 = 298878805;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
