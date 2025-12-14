#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
unsigned char var_2 = (unsigned char)36;
unsigned char var_6 = (unsigned char)59;
unsigned char var_7 = (unsigned char)7;
int var_8 = -1039618086;
unsigned short var_9 = (unsigned short)43437;
unsigned short var_10 = (unsigned short)49386;
unsigned int var_12 = 3768412633U;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)172;
int zero = 0;
short var_19 = (short)9526;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8106745383588021008LL;
unsigned char var_22 = (unsigned char)188;
unsigned int var_23 = 2428530676U;
long long int var_24 = 8217808907431518608LL;
int var_25 = -1836489406;
unsigned int var_26 = 2801839413U;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 5296324710210650485ULL;
unsigned short var_29 = (unsigned short)57358;
unsigned char arr_0 [11] [11] ;
signed char arr_1 [11] [11] ;
int arr_2 [11] ;
signed char arr_3 [11] [11] ;
_Bool arr_6 [11] [11] [11] ;
long long int arr_7 [11] ;
int arr_12 [15] [15] ;
_Bool arr_13 [15] ;
_Bool arr_8 [11] ;
int arr_11 [10] ;
unsigned long long int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -896278554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 8904907710010094669LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 1946897331;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -1969486227;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 8568743028735999183ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
