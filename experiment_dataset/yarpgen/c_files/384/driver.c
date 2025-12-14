#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
long long int var_2 = -7196224177700462579LL;
unsigned long long int var_4 = 14343752135420173135ULL;
unsigned short var_6 = (unsigned short)64154;
unsigned short var_7 = (unsigned short)16786;
unsigned long long int var_8 = 16928188793099321108ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 7646885807454498296LL;
int var_11 = 1154564623;
unsigned char var_12 = (unsigned char)241;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13620281689364633374ULL;
long long int var_15 = -8289252111170935319LL;
unsigned long long int var_16 = 16022671072681163938ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int arr_0 [18] ;
long long int arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
_Bool arr_5 [18] [18] [18] ;
int arr_6 [18] [18] ;
unsigned int arr_8 [20] ;
_Bool arr_7 [18] [18] ;
int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2101348891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1292011575822211132LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1913841569U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -897683200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 3918299794U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1022204320;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
