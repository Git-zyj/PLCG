#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2191908047U;
unsigned char var_6 = (unsigned char)81;
unsigned short var_7 = (unsigned short)30229;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)34;
int zero = 0;
unsigned int var_17 = 489869732U;
signed char var_18 = (signed char)-8;
short var_19 = (short)30670;
signed char var_20 = (signed char)(-127 - 1);
int var_21 = 1808456603;
unsigned int var_22 = 2816555301U;
int arr_4 [17] ;
_Bool arr_5 [17] ;
signed char arr_7 [17] [17] ;
int arr_13 [17] [17] [17] ;
unsigned short arr_3 [10] ;
short arr_8 [17] ;
signed char arr_14 [17] ;
unsigned int arr_15 [17] ;
unsigned long long int arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2058984157;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1874142290;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)32893;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)-20703;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 477741389U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 15069004537562488366ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
