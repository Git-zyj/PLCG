#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47504;
int var_2 = -476199376;
unsigned long long int var_3 = 11505449297172110323ULL;
unsigned short var_5 = (unsigned short)48846;
long long int var_7 = 1566142480922590056LL;
unsigned char var_11 = (unsigned char)143;
unsigned long long int var_14 = 16515853996703768358ULL;
unsigned char var_15 = (unsigned char)130;
unsigned char var_17 = (unsigned char)207;
int zero = 0;
unsigned short var_18 = (unsigned short)25427;
long long int var_19 = 2790684709088702139LL;
long long int var_20 = 7532831426989475669LL;
long long int var_21 = -1709901951563618231LL;
unsigned char var_22 = (unsigned char)194;
unsigned char var_23 = (unsigned char)154;
unsigned long long int var_24 = 12052187114150857831ULL;
unsigned char var_25 = (unsigned char)78;
unsigned short var_26 = (unsigned short)40721;
long long int var_27 = 2309761241564842752LL;
long long int arr_1 [13] ;
long long int arr_15 [14] [14] ;
unsigned short arr_16 [14] ;
unsigned char arr_18 [14] ;
unsigned short arr_20 [14] [14] ;
int arr_21 [14] ;
unsigned char arr_23 [14] ;
unsigned short arr_13 [13] [13] [13] ;
int arr_14 [13] [13] ;
long long int arr_24 [14] [14] ;
unsigned char arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3830835758009010605LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 7090638679223659738LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)29576;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)60303;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 1541712056;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)25282 : (unsigned short)33695;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = -538883684;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = 2623819708236219055LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned char)142;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
