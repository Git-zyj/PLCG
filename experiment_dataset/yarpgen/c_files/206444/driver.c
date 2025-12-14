#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9492471007444599273ULL;
unsigned int var_8 = 1302019431U;
unsigned long long int var_11 = 18367319787711444152ULL;
int zero = 0;
unsigned int var_14 = 2890731961U;
unsigned int var_15 = 3078194140U;
short var_16 = (short)-583;
unsigned long long int var_17 = 7262795126900700347ULL;
unsigned int var_18 = 2383487741U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
