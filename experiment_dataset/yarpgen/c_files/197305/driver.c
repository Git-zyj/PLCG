#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2021;
long long int var_2 = 35439728991855604LL;
signed char var_3 = (signed char)-114;
long long int var_4 = -6881685637350677908LL;
unsigned long long int var_5 = 15084980921414821999ULL;
unsigned char var_6 = (unsigned char)150;
short var_7 = (short)-10329;
unsigned int var_9 = 1441203204U;
int zero = 0;
long long int var_10 = 7334241336176183406LL;
long long int var_11 = -8555478916707371799LL;
unsigned char var_12 = (unsigned char)101;
unsigned char var_13 = (unsigned char)119;
int var_14 = -2022030565;
unsigned char var_15 = (unsigned char)211;
unsigned int var_16 = 1973711884U;
unsigned char var_17 = (unsigned char)85;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1953700598049266438ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 2663790223224686675LL;
long long int var_22 = -1638011331059799709LL;
unsigned long long int arr_1 [16] [16] ;
unsigned int arr_3 [20] ;
unsigned int arr_4 [20] ;
unsigned int arr_5 [22] ;
unsigned char arr_7 [22] ;
unsigned int arr_8 [22] ;
signed char arr_12 [24] ;
unsigned int arr_2 [16] ;
signed char arr_9 [22] [22] ;
long long int arr_13 [24] ;
long long int arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 10514358854556554524ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 858248846U : 1343210344U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1446880744U : 4086584976U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 2668508163U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 2408994780U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2550406435U : 2430627371U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 8489877046222834229LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = -3329363898746866420LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
