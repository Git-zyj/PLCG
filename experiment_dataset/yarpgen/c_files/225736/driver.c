#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)52;
unsigned long long int var_5 = 10410112191120317290ULL;
unsigned int var_6 = 1773297999U;
short var_7 = (short)21940;
unsigned short var_10 = (unsigned short)7540;
unsigned int var_12 = 3109003933U;
int zero = 0;
signed char var_13 = (signed char)37;
int var_14 = 798297843;
unsigned int var_15 = 661598681U;
unsigned int var_16 = 3504881239U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
