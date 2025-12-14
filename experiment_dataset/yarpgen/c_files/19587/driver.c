#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1972221001U;
long long int var_1 = 820674255290002339LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)18667;
signed char var_4 = (signed char)98;
unsigned char var_5 = (unsigned char)113;
short var_6 = (short)18441;
signed char var_7 = (signed char)-123;
short var_8 = (short)25383;
unsigned short var_9 = (unsigned short)54409;
unsigned int var_10 = 2904374044U;
short var_11 = (short)-29510;
int zero = 0;
unsigned long long int var_13 = 763976188997091561ULL;
long long int var_14 = 5265860696561581236LL;
short var_15 = (short)8696;
unsigned short var_16 = (unsigned short)43849;
unsigned int var_17 = 4029538906U;
unsigned short var_18 = (unsigned short)10101;
unsigned short arr_0 [21] [21] ;
_Bool arr_1 [21] ;
_Bool arr_2 [22] ;
_Bool arr_3 [22] ;
_Bool arr_4 [22] [22] ;
unsigned long long int arr_5 [22] ;
signed char arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)38426;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11793828783444967307ULL : 1705083803254251210ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-47 : (signed char)-3;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
