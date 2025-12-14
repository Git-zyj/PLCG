#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1919505757;
unsigned char var_6 = (unsigned char)144;
unsigned short var_8 = (unsigned short)59388;
unsigned short var_9 = (unsigned short)53971;
unsigned char var_10 = (unsigned char)176;
unsigned int var_11 = 2260276865U;
signed char var_14 = (signed char)126;
unsigned long long int var_18 = 14743537433599170903ULL;
int zero = 0;
unsigned int var_20 = 434317975U;
unsigned long long int var_21 = 13253761045970017313ULL;
_Bool var_22 = (_Bool)0;
int var_23 = 1670620824;
int var_24 = 248825896;
unsigned short var_25 = (unsigned short)35768;
_Bool var_26 = (_Bool)1;
long long int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned int arr_3 [20] ;
signed char arr_7 [19] [19] ;
unsigned short arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2532811410168045163LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3395732245U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2066862860U : 272547856U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)37831;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
