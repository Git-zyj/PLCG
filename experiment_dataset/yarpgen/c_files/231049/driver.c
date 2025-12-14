#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)10560;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-9183;
short var_8 = (short)-30949;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 936892608U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)198;
int zero = 0;
long long int var_16 = -4520915753564029199LL;
unsigned int var_17 = 3704621062U;
signed char var_18 = (signed char)98;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8194623132682689109LL;
unsigned int var_22 = 3816049304U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)55;
unsigned int var_25 = 2964202299U;
_Bool arr_3 [13] ;
short arr_5 [13] [13] [13] ;
unsigned int arr_6 [13] ;
unsigned short arr_7 [13] [13] [13] [13] ;
short arr_8 [13] [13] ;
signed char arr_15 [25] ;
unsigned char arr_16 [25] [25] ;
short arr_17 [25] [25] ;
short arr_13 [13] ;
unsigned int arr_14 [13] [13] ;
unsigned long long int arr_19 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)6106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3202265166U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24095;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-14926;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-16799;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)-30950;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 2023131679U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 15756984099396569711ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
