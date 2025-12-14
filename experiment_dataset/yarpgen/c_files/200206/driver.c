#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -729391341697581460LL;
short var_1 = (short)-30424;
unsigned long long int var_3 = 4356123239651977720ULL;
unsigned char var_5 = (unsigned char)172;
unsigned char var_7 = (unsigned char)106;
int var_8 = -26707591;
unsigned short var_9 = (unsigned short)11875;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
unsigned char var_13 = (unsigned char)238;
long long int var_14 = -5409290285740632935LL;
short var_15 = (short)12162;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)114;
unsigned char var_18 = (unsigned char)194;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)35;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [13] [13] ;
int arr_8 [18] [18] ;
unsigned long long int arr_11 [18] [18] [18] ;
long long int arr_2 [13] ;
long long int arr_3 [13] ;
long long int arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)19906;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1380388620 : 1314241408;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 15563090697277219654ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -2079175041482610739LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 584575315547283407LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = -1988983983497393909LL;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
