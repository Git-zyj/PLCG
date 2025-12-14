#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1952619960;
unsigned char var_2 = (unsigned char)105;
int var_3 = -863921367;
signed char var_6 = (signed char)-111;
short var_8 = (short)11226;
unsigned long long int var_10 = 4101436049757648930ULL;
unsigned int var_11 = 151447112U;
int zero = 0;
unsigned long long int var_13 = 565199875877977280ULL;
long long int var_14 = -8850819931602170985LL;
unsigned char var_15 = (unsigned char)108;
unsigned long long int var_16 = 10426393319976597030ULL;
int var_17 = 2143077030;
int var_18 = -1387371025;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 15590013808193283184ULL;
unsigned int arr_0 [19] ;
short arr_1 [19] [19] ;
int arr_2 [19] [19] ;
_Bool arr_3 [19] ;
unsigned int arr_6 [19] [19] [19] ;
unsigned int arr_7 [19] ;
long long int arr_13 [16] [16] ;
unsigned int arr_15 [16] [16] ;
short arr_16 [16] ;
unsigned int arr_4 [19] ;
int arr_5 [19] ;
signed char arr_8 [19] [19] ;
unsigned int arr_11 [13] ;
unsigned int arr_12 [13] ;
unsigned int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2128081711U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3773;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -900943696;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2105651555U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2921684270U : 489677674U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 272490118649820629LL : -7695063881988699002LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 1853986125U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-23499 : (short)16330;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2628349171U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 582803158;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 371774579U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 3238195151U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 254494573U : 732215556U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
