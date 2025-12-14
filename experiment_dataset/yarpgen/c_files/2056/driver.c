#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2496764778U;
signed char var_6 = (signed char)-7;
long long int var_10 = -2081513942583046408LL;
int var_11 = -1574739310;
unsigned int var_12 = 107129972U;
int var_13 = -65428412;
int zero = 0;
int var_14 = -726448330;
int var_15 = -1424411005;
unsigned long long int var_16 = 8171461962483286564ULL;
short var_17 = (short)-17369;
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
