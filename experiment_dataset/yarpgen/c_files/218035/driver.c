#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16139;
unsigned int var_3 = 1729646712U;
long long int var_5 = 1077936052199965108LL;
short var_6 = (short)31480;
int var_7 = -1571979705;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)41;
unsigned long long int var_14 = 5708695848769940283ULL;
short var_15 = (short)-18073;
short var_16 = (short)-3454;
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
