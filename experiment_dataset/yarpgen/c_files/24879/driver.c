#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28861;
short var_5 = (short)11088;
unsigned int var_7 = 2988655540U;
unsigned short var_14 = (unsigned short)17487;
int zero = 0;
int var_15 = 1869107607;
unsigned char var_16 = (unsigned char)190;
unsigned int var_17 = 4171391899U;
signed char var_18 = (signed char)-96;
unsigned short var_19 = (unsigned short)45281;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
