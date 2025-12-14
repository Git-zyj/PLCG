#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4780026397745126118ULL;
unsigned int var_11 = 1446932579U;
unsigned int var_12 = 2425284567U;
short var_13 = (short)27495;
int zero = 0;
unsigned char var_14 = (unsigned char)10;
short var_15 = (short)5159;
unsigned char var_16 = (unsigned char)67;
short var_17 = (short)7582;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
