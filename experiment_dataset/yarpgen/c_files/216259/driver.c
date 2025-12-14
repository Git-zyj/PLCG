#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3553948061120491418LL;
unsigned long long int var_2 = 5820754366063151008ULL;
unsigned int var_4 = 2780201632U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-9202;
int var_12 = 1645225766;
unsigned int var_13 = 128324394U;
unsigned int var_14 = 278028291U;
int zero = 0;
long long int var_15 = -9129885664977478007LL;
short var_16 = (short)20639;
signed char var_17 = (signed char)-43;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4413648199232382406LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
