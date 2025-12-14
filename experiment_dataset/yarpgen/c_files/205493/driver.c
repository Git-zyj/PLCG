#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37667;
unsigned char var_2 = (unsigned char)233;
short var_4 = (short)11322;
unsigned short var_8 = (unsigned short)60425;
short var_10 = (short)-3658;
long long int var_11 = -3739029293988911316LL;
unsigned long long int var_12 = 11013528783178257063ULL;
int zero = 0;
long long int var_15 = 972974922973765826LL;
short var_16 = (short)-5324;
short var_17 = (short)19931;
unsigned char var_18 = (unsigned char)238;
unsigned char var_19 = (unsigned char)110;
short var_20 = (short)-8365;
int var_21 = -1044499257;
unsigned char var_22 = (unsigned char)201;
signed char var_23 = (signed char)32;
unsigned short var_24 = (unsigned short)60403;
signed char var_25 = (signed char)-98;
unsigned short arr_2 [19] [19] ;
int arr_8 [11] ;
unsigned char arr_11 [23] ;
int arr_12 [23] ;
unsigned char arr_13 [23] ;
long long int arr_9 [11] [11] ;
unsigned short arr_10 [11] ;
unsigned short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)26244 : (unsigned short)54365;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1958762377;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1919533685;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = -4420699843731285545LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)41999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned short)16644;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
