#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3099309414224098891ULL;
unsigned short var_1 = (unsigned short)42063;
unsigned char var_2 = (unsigned char)198;
unsigned char var_3 = (unsigned char)167;
unsigned int var_4 = 2503584289U;
signed char var_5 = (signed char)46;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-20769;
int zero = 0;
long long int var_11 = -6827344405482493819LL;
unsigned short var_12 = (unsigned short)50037;
unsigned short var_13 = (unsigned short)62507;
unsigned int var_14 = 3738678187U;
unsigned int var_15 = 3752426235U;
unsigned long long int var_16 = 4708159718601141048ULL;
unsigned short var_17 = (unsigned short)10449;
unsigned long long int var_18 = 8818561089086114055ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4216102641172346398LL;
unsigned long long int var_21 = 2351233793851828338ULL;
unsigned char var_22 = (unsigned char)99;
unsigned int var_23 = 4264347836U;
unsigned int var_24 = 2299391366U;
unsigned char var_25 = (unsigned char)52;
signed char var_26 = (signed char)-30;
unsigned int var_27 = 3253095586U;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
_Bool arr_2 [19] ;
short arr_3 [19] ;
long long int arr_6 [14] ;
unsigned int arr_7 [14] [14] ;
_Bool arr_11 [15] ;
short arr_13 [15] [15] [15] ;
unsigned short arr_16 [15] [15] [15] ;
_Bool arr_20 [15] [15] [15] ;
unsigned int arr_24 [15] [15] [15] [15] [15] ;
long long int arr_4 [19] ;
int arr_5 [19] [19] ;
unsigned long long int arr_9 [14] ;
unsigned long long int arr_17 [15] [15] [15] [15] ;
unsigned long long int arr_18 [15] ;
unsigned long long int arr_19 [15] ;
int arr_29 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)122 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1981887925U : 349108410U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-29369;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -206868294720699358LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 3025675979U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)2301;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)46132;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 2076611664U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -103834329223877602LL : 7612799373422121061LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -975448720 : -1677649900;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 4393786112398175218ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 14814742273258408455ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 12067094790360302363ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 4946888869512836817ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = -2046118433;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
