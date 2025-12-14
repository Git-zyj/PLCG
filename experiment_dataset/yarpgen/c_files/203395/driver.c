#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1441;
unsigned long long int var_1 = 5696062131923798404ULL;
signed char var_3 = (signed char)-78;
unsigned char var_4 = (unsigned char)120;
unsigned short var_5 = (unsigned short)64366;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)44415;
unsigned int var_9 = 1678207218U;
unsigned char var_10 = (unsigned char)8;
long long int var_11 = -162466752971613554LL;
int zero = 0;
unsigned long long int var_12 = 16428595624551985680ULL;
unsigned char var_13 = (unsigned char)103;
unsigned long long int var_14 = 13713815917780115556ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)3821;
long long int var_17 = 5090007465138918960LL;
unsigned long long int var_18 = 13251503831978973600ULL;
short var_19 = (short)-8969;
unsigned int var_20 = 171026803U;
long long int var_21 = 3674721614863632632LL;
signed char var_22 = (signed char)20;
unsigned int var_23 = 382555980U;
int arr_0 [18] ;
short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned char arr_3 [18] ;
signed char arr_8 [18] [18] [18] ;
_Bool arr_9 [18] [18] ;
unsigned char arr_10 [18] [18] [18] ;
unsigned char arr_18 [18] ;
long long int arr_4 [18] ;
_Bool arr_7 [18] [18] [18] ;
_Bool arr_19 [18] ;
unsigned long long int arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -457060613;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-21292;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17667232056856662241ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -9209170781624430997LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 6189018617055721004ULL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
