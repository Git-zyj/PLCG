#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)23424;
unsigned int var_3 = 2018985422U;
int var_4 = 690984750;
unsigned short var_5 = (unsigned short)23712;
unsigned long long int var_7 = 12465334193600480370ULL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 608440598U;
unsigned short var_15 = (unsigned short)30584;
unsigned short var_16 = (unsigned short)40132;
unsigned short var_17 = (unsigned short)64142;
int var_18 = -546217493;
unsigned long long int var_19 = 1504917581773326167ULL;
long long int var_20 = 4794607347731194238LL;
short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)22775;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
