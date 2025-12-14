#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7680203313183952442LL;
unsigned char var_2 = (unsigned char)210;
unsigned long long int var_3 = 16519175784393491086ULL;
unsigned long long int var_4 = 14915604309964025809ULL;
unsigned short var_5 = (unsigned short)28172;
long long int var_6 = 5266356120060998537LL;
int var_8 = 248305557;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)98;
unsigned int var_12 = 3256497106U;
unsigned short var_14 = (unsigned short)20014;
signed char var_16 = (signed char)-47;
unsigned int var_17 = 3597963587U;
long long int var_18 = -7466123009748421301LL;
int zero = 0;
int var_19 = 892851404;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)38545;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)8602;
long long int var_24 = -2831248562301749283LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -7927694083398404934LL;
signed char var_27 = (signed char)-124;
unsigned int arr_0 [11] ;
unsigned int arr_3 [11] [11] ;
unsigned char arr_5 [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] [11] ;
unsigned char arr_7 [11] ;
unsigned long long int arr_11 [11] ;
unsigned long long int arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2555217502U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3579099612U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 13415737121244857447ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 8626234207356089971ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 1189399386121049041ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
