#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9208;
signed char var_3 = (signed char)76;
long long int var_4 = 4878148530980815960LL;
unsigned short var_7 = (unsigned short)6826;
unsigned int var_8 = 3757628400U;
short var_9 = (short)8068;
int zero = 0;
unsigned long long int var_10 = 4358529543207765572ULL;
short var_11 = (short)9060;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3034763778U;
int var_15 = 865273682;
unsigned int var_16 = 3219744169U;
unsigned short var_17 = (unsigned short)12045;
_Bool var_18 = (_Bool)0;
short var_19 = (short)12547;
unsigned long long int var_20 = 16800897761101856001ULL;
long long int var_21 = -8755771722487114663LL;
_Bool var_22 = (_Bool)0;
signed char arr_0 [22] ;
short arr_1 [22] [22] ;
long long int arr_2 [22] ;
int arr_3 [22] ;
unsigned long long int arr_6 [13] ;
unsigned int arr_12 [20] ;
int arr_16 [22] ;
short arr_19 [22] ;
unsigned long long int arr_4 [22] ;
unsigned char arr_8 [13] ;
int arr_11 [13] ;
unsigned char arr_14 [20] ;
int arr_21 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)5666;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7998399900011492824LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1130533784;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 6503796197671049662ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 3532329254U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = -2145345312;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (short)14836;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3601173598134338043ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 532088795 : -765542543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = -559995752;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
