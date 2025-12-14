#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4498356847368045138LL;
unsigned int var_8 = 2660083193U;
unsigned short var_10 = (unsigned short)17548;
int zero = 0;
short var_16 = (short)28972;
unsigned char var_17 = (unsigned char)61;
unsigned short var_18 = (unsigned short)30397;
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
