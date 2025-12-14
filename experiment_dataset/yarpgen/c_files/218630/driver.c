#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3173;
unsigned short var_1 = (unsigned short)19152;
int var_2 = -1391845152;
_Bool var_3 = (_Bool)1;
long long int var_9 = 3768141485611271654LL;
short var_10 = (short)17997;
unsigned short var_12 = (unsigned short)3613;
short var_13 = (short)-856;
int zero = 0;
short var_14 = (short)25843;
unsigned long long int var_15 = 12209185724681927261ULL;
unsigned short var_16 = (unsigned short)29829;
unsigned long long int var_17 = 8100786327226005534ULL;
unsigned long long int var_18 = 13059487277492399533ULL;
_Bool arr_3 [19] [19] [19] ;
long long int arr_4 [19] [19] [19] ;
int arr_7 [21] ;
unsigned long long int arr_9 [21] ;
int arr_5 [19] ;
unsigned char arr_10 [21] [21] [21] ;
unsigned char arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4615142724485260406LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1918316901;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 17244568800920646336ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 652367440;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)101 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)247;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
