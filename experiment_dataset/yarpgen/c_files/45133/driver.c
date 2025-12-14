#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 764154551;
short var_4 = (short)-13977;
short var_7 = (short)-14541;
unsigned long long int var_12 = 6252989147590165969ULL;
unsigned int var_14 = 603833494U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 8755546302129243423ULL;
signed char var_20 = (signed char)-62;
short var_21 = (short)28339;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
