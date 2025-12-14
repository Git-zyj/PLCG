#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7927047653820443194ULL;
unsigned short var_3 = (unsigned short)8580;
unsigned char var_5 = (unsigned char)196;
unsigned short var_7 = (unsigned short)64976;
unsigned short var_8 = (unsigned short)46058;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-24484;
int zero = 0;
int var_14 = 705049756;
unsigned int var_15 = 1640909367U;
long long int var_16 = -109422114866118055LL;
long long int var_17 = 145760670689694401LL;
long long int var_18 = 9055560047160481935LL;
int var_19 = 1114210169;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)9;
_Bool arr_0 [15] ;
int arr_2 [15] ;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
unsigned short arr_7 [15] ;
unsigned long long int arr_8 [15] [15] ;
_Bool arr_5 [11] ;
unsigned int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -42407872;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 15052447131273108835ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3857504940090107569ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)42528;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 6689795892587522ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 2343792745U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
