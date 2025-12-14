#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 398548489;
unsigned int var_2 = 2381710724U;
short var_3 = (short)-10493;
unsigned long long int var_5 = 18360854398891390587ULL;
_Bool var_6 = (_Bool)0;
int var_8 = 34462006;
unsigned long long int var_10 = 11060092489387971196ULL;
unsigned int var_11 = 3615276064U;
short var_12 = (short)25222;
unsigned long long int var_13 = 4253346165270421096ULL;
unsigned int var_15 = 1077341464U;
long long int var_18 = -430566586613129697LL;
int zero = 0;
short var_20 = (short)8379;
short var_21 = (short)-8488;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-2563;
unsigned long long int var_24 = 1296439323982894777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
