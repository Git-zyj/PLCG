#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 827109821U;
unsigned int var_2 = 2400793848U;
short var_3 = (short)-11069;
short var_4 = (short)-28210;
unsigned short var_5 = (unsigned short)56120;
unsigned long long int var_6 = 15229917552512016124ULL;
unsigned int var_7 = 2649628776U;
unsigned int var_8 = 3855603765U;
unsigned long long int var_9 = 9054282640313495032ULL;
int zero = 0;
short var_10 = (short)-20147;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 6004322977288405460ULL;
signed char var_13 = (signed char)-13;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
