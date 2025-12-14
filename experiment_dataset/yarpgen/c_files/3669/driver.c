#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16208474353021629221ULL;
short var_7 = (short)18043;
unsigned char var_8 = (unsigned char)198;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-71;
unsigned int var_13 = 1573376391U;
short var_14 = (short)-9467;
unsigned int var_15 = 793645294U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
