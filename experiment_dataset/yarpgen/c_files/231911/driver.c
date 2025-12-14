#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned int var_9 = 2818791665U;
unsigned short var_11 = (unsigned short)40495;
unsigned short var_12 = (unsigned short)22869;
int zero = 0;
unsigned short var_16 = (unsigned short)64702;
int var_17 = 1543030623;
int var_18 = -1841916525;
long long int var_19 = 7394258821849988904LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
