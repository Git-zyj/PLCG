#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4998796696394780452LL;
unsigned long long int var_2 = 6790281323658464360ULL;
unsigned int var_5 = 1758577500U;
unsigned long long int var_6 = 12461733423887165979ULL;
unsigned int var_8 = 1473084751U;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)46;
short var_14 = (short)-5167;
short var_15 = (short)20070;
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
