#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13784140077649591001ULL;
unsigned short var_4 = (unsigned short)51562;
long long int var_10 = 819258787807594637LL;
int var_11 = 575961358;
signed char var_14 = (signed char)117;
int var_17 = -733103670;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3700303379U;
long long int var_20 = 8449007115937786675LL;
unsigned long long int var_21 = 7115585951104136418ULL;
long long int var_22 = -138239563483211101LL;
unsigned short var_23 = (unsigned short)41039;
unsigned short arr_13 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)27132;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
