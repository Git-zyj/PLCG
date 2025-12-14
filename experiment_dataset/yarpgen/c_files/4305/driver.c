#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -932562909;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_8 = (short)769;
signed char var_9 = (signed char)101;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)20181;
short var_14 = (short)11996;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 4956828614738805800LL;
long long int var_17 = 5029617437730557100LL;
signed char var_18 = (signed char)-10;
long long int var_19 = -5014281569575801086LL;
unsigned int var_20 = 2079755174U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
