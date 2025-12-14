#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_8 = -6255075626261611915LL;
signed char var_9 = (signed char)43;
int var_10 = 1813012976;
int zero = 0;
int var_13 = -1088647172;
unsigned int var_14 = 620353408U;
unsigned int var_15 = 2850909801U;
short var_16 = (short)24695;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
