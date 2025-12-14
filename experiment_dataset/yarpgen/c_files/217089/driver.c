#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
unsigned int var_1 = 2027324175U;
unsigned long long int var_2 = 3898593834618807974ULL;
short var_3 = (short)20860;
unsigned short var_4 = (unsigned short)42122;
long long int var_5 = -3567998782861594869LL;
unsigned long long int var_6 = 7782720975677029938ULL;
unsigned long long int var_7 = 3477945587479160785ULL;
signed char var_8 = (signed char)32;
_Bool var_9 = (_Bool)1;
int var_10 = -435643950;
long long int var_11 = 1619106149524427233LL;
int zero = 0;
short var_12 = (short)16718;
int var_13 = 1488413262;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)8227;
unsigned short var_16 = (unsigned short)36941;
unsigned long long int var_17 = 8101052035252893053ULL;
long long int var_18 = 4097570894020917819LL;
long long int var_19 = -7511358674369735596LL;
int var_20 = 282959194;
unsigned short var_21 = (unsigned short)26448;
unsigned char var_22 = (unsigned char)251;
short var_23 = (short)-21464;
unsigned long long int var_24 = 16031698479209549333ULL;
unsigned long long int var_25 = 14936328101418095293ULL;
int var_26 = 867065993;
signed char var_27 = (signed char)-121;
unsigned short arr_0 [19] ;
_Bool arr_1 [19] ;
signed char arr_2 [19] ;
long long int arr_3 [19] [19] ;
unsigned int arr_9 [16] ;
unsigned long long int arr_10 [16] ;
_Bool arr_16 [16] ;
short arr_17 [16] [16] [16] [16] ;
_Bool arr_4 [19] ;
short arr_5 [19] ;
short arr_8 [16] ;
int arr_12 [16] ;
unsigned long long int arr_18 [16] [16] ;
unsigned short arr_22 [16] ;
unsigned int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)51016;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 8994133612923113887LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 22284488U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 6580033224951813924ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-24996 : (short)-1454;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-16238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-32562;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 587774445;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 11954339149915837794ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47766 : (unsigned short)46798;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2329109306U : 2605747085U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
