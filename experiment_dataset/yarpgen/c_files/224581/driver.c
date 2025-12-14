#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8752211965519369523ULL;
unsigned short var_7 = (unsigned short)64343;
int var_9 = -1834467753;
unsigned int var_11 = 1343518521U;
int zero = 0;
unsigned int var_17 = 940830001U;
unsigned short var_18 = (unsigned short)10727;
int var_19 = 312041941;
short var_20 = (short)-11407;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
