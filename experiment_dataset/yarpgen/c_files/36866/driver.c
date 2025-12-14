#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3543486390951116004LL;
long long int var_3 = -3216115128322747671LL;
unsigned long long int var_4 = 3531848559977704913ULL;
unsigned long long int var_5 = 17348435640464160017ULL;
signed char var_6 = (signed char)59;
unsigned char var_8 = (unsigned char)43;
long long int var_9 = 3217890924824813145LL;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
unsigned char var_11 = (unsigned char)16;
long long int var_12 = -6281786121542565329LL;
long long int var_13 = 3497315256028308031LL;
unsigned char var_14 = (unsigned char)84;
int var_15 = -990847652;
unsigned long long int var_16 = 14760209771174769971ULL;
signed char var_17 = (signed char)-55;
unsigned int var_18 = 967770649U;
int var_19 = -353732312;
unsigned int arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned int arr_11 [23] [23] ;
unsigned char arr_17 [21] ;
unsigned int arr_2 [11] ;
unsigned char arr_3 [11] ;
signed char arr_4 [11] ;
signed char arr_8 [12] [12] ;
unsigned char arr_9 [12] [12] ;
unsigned char arr_10 [12] ;
unsigned int arr_13 [23] ;
signed char arr_14 [23] [23] ;
unsigned short arr_15 [23] [23] ;
signed char arr_19 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 826556459U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 127369018U : 145752464U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4182293858U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1307379769U : 958498719U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)75 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21790 : (unsigned short)39712;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (signed char)-32;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
