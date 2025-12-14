#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25997;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 90406901U;
unsigned short var_6 = (unsigned short)51321;
signed char var_11 = (signed char)12;
long long int var_14 = -7469163623909226754LL;
unsigned short var_18 = (unsigned short)22357;
int zero = 0;
unsigned int var_20 = 1191966253U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2955396805U;
void init() {
}

void checksum() {
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
