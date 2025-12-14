#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1272985195;
_Bool var_2 = (_Bool)0;
long long int var_8 = 2339234769363917035LL;
int var_11 = -817497302;
unsigned long long int var_15 = 13775351051723865935ULL;
int var_16 = -975015554;
unsigned int var_17 = 4248946635U;
short var_18 = (short)543;
int zero = 0;
short var_19 = (short)-9881;
_Bool var_20 = (_Bool)1;
short var_21 = (short)22558;
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
