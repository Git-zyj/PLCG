#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)200;
unsigned long long int var_8 = 16977658289212577638ULL;
long long int var_9 = 3232980795379893230LL;
unsigned short var_11 = (unsigned short)56795;
unsigned short var_13 = (unsigned short)42115;
unsigned long long int var_14 = 6042241776188638235ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)31662;
unsigned char var_17 = (unsigned char)87;
unsigned long long int var_18 = 1857695156219561297ULL;
unsigned long long int var_19 = 9360723600433834324ULL;
int var_20 = -1763982272;
unsigned long long int var_21 = 4692726205695843378ULL;
short arr_4 [18] [18] [18] ;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)20075;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)27378;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
