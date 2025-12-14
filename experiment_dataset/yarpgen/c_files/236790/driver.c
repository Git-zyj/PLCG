#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22666;
signed char var_3 = (signed char)69;
unsigned int var_5 = 2908625676U;
signed char var_6 = (signed char)30;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -367439065624914786LL;
long long int var_12 = -2080770716309330462LL;
int var_13 = 1851654471;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
