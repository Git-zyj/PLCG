#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -754626774;
unsigned long long int var_1 = 766865296639134219ULL;
int var_3 = -1776236275;
signed char var_4 = (signed char)-46;
long long int var_5 = 6779625436172171599LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-23695;
signed char var_10 = (signed char)103;
_Bool var_12 = (_Bool)0;
int var_13 = -784339210;
int zero = 0;
int var_15 = 478871585;
unsigned long long int var_16 = 8736851681601292963ULL;
short var_17 = (short)10006;
signed char var_18 = (signed char)13;
short var_19 = (short)14877;
int arr_1 [23] ;
long long int arr_2 [23] [23] ;
int arr_4 [23] ;
long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 166367509;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 5039970953531949786LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 239512521;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -4246239259203541366LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
