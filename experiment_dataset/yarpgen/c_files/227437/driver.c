#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5845941862693669017LL;
short var_4 = (short)18486;
long long int var_6 = 3545087733616996491LL;
unsigned int var_9 = 319418247U;
unsigned short var_13 = (unsigned short)37544;
int zero = 0;
short var_14 = (short)-18096;
long long int var_15 = -4350618813534954984LL;
unsigned int var_16 = 2175107915U;
unsigned short var_17 = (unsigned short)30651;
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
