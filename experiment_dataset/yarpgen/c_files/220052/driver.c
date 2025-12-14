#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2771941017U;
unsigned int var_6 = 641466340U;
unsigned int var_7 = 1738391582U;
unsigned int var_10 = 4157168316U;
unsigned int var_14 = 1322182605U;
unsigned int var_15 = 1136701095U;
int zero = 0;
unsigned int var_18 = 2662310644U;
unsigned int var_19 = 64888307U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
