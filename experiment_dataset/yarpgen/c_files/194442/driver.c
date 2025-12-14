#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
signed char var_1 = (signed char)46;
short var_2 = (short)-30869;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_6 = (short)28698;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-66;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2042647218821245951LL;
int zero = 0;
unsigned int var_15 = 1276463741U;
signed char var_16 = (signed char)-120;
signed char var_17 = (signed char)-92;
short var_18 = (short)13098;
signed char var_19 = (signed char)-32;
short var_20 = (short)-4888;
unsigned char var_21 = (unsigned char)210;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-14181;
_Bool arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
short arr_4 [20] ;
unsigned int arr_5 [20] [20] [20] ;
unsigned char arr_7 [20] [20] ;
short arr_6 [20] ;
long long int arr_9 [20] [20] ;
long long int arr_10 [20] [20] ;
short arr_11 [20] ;
unsigned int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1965120685U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)14831;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2630790922U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)219 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)12446;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -2663235331523449426LL : -6668319802928300665LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3667290822935779708LL : 5220201916941318545LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)2139;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 4033779531U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
