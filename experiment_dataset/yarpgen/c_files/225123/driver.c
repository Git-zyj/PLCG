#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 1837811405051617929LL;
long long int var_5 = 354602903087046207LL;
unsigned char var_6 = (unsigned char)16;
signed char var_9 = (signed char)49;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-29870;
long long int var_12 = 8016997647101408249LL;
unsigned short var_13 = (unsigned short)60724;
signed char var_15 = (signed char)-122;
short var_17 = (short)23499;
int zero = 0;
long long int var_18 = -8115479201191409653LL;
long long int var_19 = 573979298298368724LL;
short var_20 = (short)13578;
unsigned long long int var_21 = 4578611936311525686ULL;
long long int var_22 = 6196810311460024377LL;
long long int var_23 = 1259717572307730342LL;
unsigned long long int var_24 = 4186923306922646598ULL;
unsigned long long int var_25 = 901223343322834067ULL;
int var_26 = -1231182340;
short var_27 = (short)24774;
unsigned int var_28 = 3466337977U;
long long int var_29 = 1532966041991080143LL;
_Bool arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
unsigned int arr_4 [21] ;
signed char arr_5 [21] ;
_Bool arr_6 [21] [21] ;
short arr_9 [11] ;
unsigned char arr_13 [13] ;
unsigned long long int arr_14 [13] ;
unsigned int arr_2 [25] ;
long long int arr_3 [25] ;
signed char arr_12 [11] ;
unsigned char arr_17 [13] [13] [13] ;
long long int arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)29459;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2811198533U : 2321790956U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)5895 : (short)28109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 11450691841034956320ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 645363211U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1486542942456524367LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)96 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 5259391953842949153LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
