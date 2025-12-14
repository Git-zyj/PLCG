#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4054829163U;
unsigned char var_2 = (unsigned char)130;
unsigned int var_3 = 34503614U;
unsigned char var_4 = (unsigned char)165;
int var_5 = -622692255;
unsigned char var_6 = (unsigned char)122;
int var_7 = -1704634441;
unsigned char var_8 = (unsigned char)220;
unsigned short var_9 = (unsigned short)25029;
long long int var_10 = -6862068917280574102LL;
unsigned short var_11 = (unsigned short)64484;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)32;
long long int var_14 = -4212917290648713443LL;
long long int var_15 = 3761471140678574183LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1689248713U;
long long int var_18 = 485546602869909534LL;
unsigned int var_19 = 1957465813U;
unsigned char var_20 = (unsigned char)33;
unsigned char arr_1 [13] ;
long long int arr_4 [13] [13] ;
long long int arr_8 [25] [25] ;
unsigned int arr_9 [25] ;
unsigned char arr_10 [25] ;
int arr_11 [25] ;
int arr_5 [13] ;
unsigned char arr_14 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -5903546651521290350LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -3458837741269955402LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 1498013455U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1192694926 : -1956032806;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -1272502643;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)207 : (unsigned char)183;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
