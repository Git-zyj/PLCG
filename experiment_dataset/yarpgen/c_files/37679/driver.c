#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30281;
short var_2 = (short)26695;
unsigned char var_4 = (unsigned char)184;
signed char var_5 = (signed char)-80;
signed char var_7 = (signed char)45;
unsigned long long int var_10 = 15168138023678467166ULL;
unsigned int var_11 = 1382568933U;
int zero = 0;
long long int var_13 = -9114641694725061819LL;
short var_14 = (short)-12081;
short var_15 = (short)-13593;
long long int var_16 = 8911157506599221417LL;
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
