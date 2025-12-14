#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54420;
unsigned char var_1 = (unsigned char)104;
int var_2 = -1019681122;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)49;
unsigned long long int var_8 = 17415946629377310011ULL;
signed char var_9 = (signed char)7;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 16136015086523161571ULL;
int zero = 0;
long long int var_15 = -5853418171170632298LL;
unsigned char var_16 = (unsigned char)154;
unsigned int var_17 = 79580913U;
unsigned int var_18 = 3648353737U;
unsigned int var_19 = 2663387898U;
long long int var_20 = 8831249848768679467LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10177573300945365444ULL;
unsigned int var_23 = 2263965355U;
signed char arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_2 [19] [19] ;
signed char arr_3 [19] ;
unsigned char arr_6 [19] ;
unsigned int arr_7 [19] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 13391224712781071238ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2188271404U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 2005651288U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
