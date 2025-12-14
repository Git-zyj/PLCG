#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 782686343U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 5537543529564343541ULL;
long long int var_7 = -2562145638289582606LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)172;
unsigned short var_10 = (unsigned short)17692;
int var_13 = 1529568365;
int zero = 0;
signed char var_14 = (signed char)93;
unsigned char var_15 = (unsigned char)197;
int var_16 = -861185666;
unsigned long long int var_17 = 2716029087850177020ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)5;
unsigned long long int var_20 = 6378635127180940732ULL;
signed char var_21 = (signed char)71;
_Bool var_22 = (_Bool)1;
long long int arr_0 [23] ;
unsigned char arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] [23] ;
int arr_4 [23] [23] ;
int arr_5 [23] ;
long long int arr_7 [16] ;
unsigned long long int arr_11 [16] ;
unsigned long long int arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1866593513300931952LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)1159;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -1130963537;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -2002989610;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -4751280718041899961LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 3415034327597920495ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 11195985767943466312ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
