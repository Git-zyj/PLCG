#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46113;
unsigned short var_5 = (unsigned short)42639;
int var_13 = 420753435;
unsigned long long int var_15 = 10220853867209191230ULL;
unsigned char var_17 = (unsigned char)96;
unsigned char var_18 = (unsigned char)14;
int zero = 0;
unsigned int var_19 = 786285062U;
unsigned int var_20 = 155990483U;
long long int var_21 = 6755537013935674950LL;
unsigned long long int var_22 = 16269625858911625182ULL;
unsigned int var_23 = 1782623243U;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] ;
unsigned char arr_2 [21] ;
unsigned short arr_3 [21] ;
unsigned short arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48918 : (unsigned short)24946;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6217682132041947438ULL : 5031466109665509126ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 17874369753803006904ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 16460912299265757693ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)94 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43678 : (unsigned short)65332;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18513 : (unsigned short)7534;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
