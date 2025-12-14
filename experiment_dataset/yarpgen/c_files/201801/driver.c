#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 336270893;
unsigned int var_4 = 2579776620U;
signed char var_7 = (signed char)84;
long long int var_8 = -5107552028599898749LL;
unsigned int var_9 = 1372191999U;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)44250;
unsigned short var_16 = (unsigned short)30721;
short var_17 = (short)-11222;
unsigned long long int var_18 = 4247318701137238977ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)13906;
short var_20 = (short)13915;
short var_21 = (short)25883;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 451905764035213218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
