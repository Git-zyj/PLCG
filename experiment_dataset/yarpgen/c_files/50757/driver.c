#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4618231394812417649LL;
short var_1 = (short)22414;
_Bool var_4 = (_Bool)1;
int var_6 = 193565378;
unsigned long long int var_7 = 4071859378949790672ULL;
short var_8 = (short)-17575;
short var_9 = (short)25689;
_Bool var_10 = (_Bool)1;
signed char var_18 = (signed char)113;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
unsigned int var_21 = 1788836429U;
short var_22 = (short)18841;
short var_23 = (short)-26010;
unsigned short var_24 = (unsigned short)11101;
unsigned short var_25 = (unsigned short)39951;
_Bool var_26 = (_Bool)0;
long long int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_5 [16] ;
int arr_6 [16] [16] ;
unsigned char arr_7 [16] ;
unsigned char arr_8 [16] ;
signed char arr_9 [16] ;
_Bool arr_12 [17] ;
long long int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2473507260249196573LL : 5897393983414919455LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 4088654237U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)28379;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -1278879374;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 100346505742766265LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
