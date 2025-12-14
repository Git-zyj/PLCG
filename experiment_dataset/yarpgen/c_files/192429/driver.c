#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_10 = 749914879233984405LL;
long long int var_17 = 6183271023930313563LL;
unsigned int var_19 = 1072034363U;
int zero = 0;
long long int var_20 = 7400564272951707474LL;
unsigned int var_21 = 2349369213U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 3253604207U;
unsigned int var_26 = 3592878459U;
unsigned int var_27 = 2471176736U;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] ;
unsigned long long int arr_3 [21] ;
unsigned int arr_7 [13] ;
long long int arr_4 [21] ;
unsigned long long int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5670860399228558813ULL : 3188839721719358425ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6319771557196469421ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 13112236585131076296ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1831086706U : 2650993904U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -5752353260772740158LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9887167948121753474ULL : 7102726991868058777ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
