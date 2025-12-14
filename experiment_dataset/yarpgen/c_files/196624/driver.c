#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4105249670U;
signed char var_1 = (signed char)-124;
signed char var_5 = (signed char)-96;
unsigned short var_8 = (unsigned short)51030;
unsigned int var_11 = 3630762119U;
unsigned short var_12 = (unsigned short)16207;
int zero = 0;
unsigned int var_14 = 521389183U;
unsigned short var_15 = (unsigned short)8956;
int var_16 = 326111383;
unsigned int var_17 = 1700512104U;
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
