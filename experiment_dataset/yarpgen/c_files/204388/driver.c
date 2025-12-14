#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40669;
int var_2 = -719405626;
signed char var_5 = (signed char)-103;
signed char var_6 = (signed char)76;
long long int var_7 = 157350449667354091LL;
signed char var_8 = (signed char)-115;
unsigned int var_9 = 2446332678U;
unsigned long long int var_12 = 10885817528552470385ULL;
unsigned char var_13 = (unsigned char)81;
int var_17 = -454629522;
signed char var_18 = (signed char)-108;
int zero = 0;
long long int var_20 = -5824062089440442683LL;
unsigned char var_21 = (unsigned char)63;
unsigned char var_22 = (unsigned char)52;
signed char var_23 = (signed char)121;
unsigned long long int var_24 = 3348689383219521443ULL;
_Bool var_25 = (_Bool)1;
int var_26 = -2013958887;
unsigned char var_27 = (unsigned char)148;
unsigned char var_28 = (unsigned char)48;
long long int var_29 = 3679960877822360155LL;
short var_30 = (short)21697;
unsigned char arr_0 [20] ;
long long int arr_1 [20] ;
unsigned short arr_4 [20] [20] ;
short arr_5 [20] ;
signed char arr_7 [20] ;
_Bool arr_8 [20] [20] ;
signed char arr_9 [20] [20] [20] ;
unsigned char arr_14 [20] ;
signed char arr_17 [20] [20] ;
long long int arr_2 [20] [20] ;
signed char arr_3 [20] [20] ;
signed char arr_6 [20] ;
unsigned int arr_10 [20] ;
long long int arr_15 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -974398397180922171LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)26200 : (unsigned short)28784;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)-31660;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -4730978838645455306LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3104476024U : 1701986375U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3855964003255182505LL : -3135500984697563724LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
