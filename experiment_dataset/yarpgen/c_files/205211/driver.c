#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2655;
unsigned long long int var_1 = 7859725173034814879ULL;
unsigned int var_2 = 3812698463U;
unsigned long long int var_3 = 11393718433032310955ULL;
unsigned char var_4 = (unsigned char)89;
unsigned long long int var_5 = 6309056632605356478ULL;
long long int var_6 = 1097726325482428762LL;
int var_7 = 1573365241;
unsigned char var_8 = (unsigned char)233;
long long int var_9 = 6246127527290443648LL;
long long int var_11 = -3847313097221982621LL;
int zero = 0;
unsigned short var_12 = (unsigned short)9318;
unsigned char var_13 = (unsigned char)24;
long long int var_14 = 4276660593203558382LL;
unsigned long long int var_15 = 17891699352321346025ULL;
unsigned char var_16 = (unsigned char)97;
unsigned short var_17 = (unsigned short)37850;
unsigned long long int var_18 = 15905628901270696454ULL;
short arr_0 [16] [16] ;
short arr_1 [16] [16] ;
unsigned int arr_4 [19] ;
unsigned short arr_5 [19] [19] ;
long long int arr_7 [24] ;
unsigned char arr_8 [24] ;
unsigned short arr_2 [16] ;
unsigned short arr_3 [16] ;
unsigned long long int arr_6 [19] ;
short arr_9 [24] [24] ;
unsigned short arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2400;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-1932;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3427319206U : 3879397289U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8555;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 5885677873506446100LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)35223;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)8722;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1912993820465889982ULL : 9122924300910018411ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-23070;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)23930;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
