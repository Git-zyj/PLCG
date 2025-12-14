#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2015089136U;
short var_2 = (short)17586;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)202;
signed char var_7 = (signed char)55;
unsigned char var_8 = (unsigned char)230;
unsigned short var_9 = (unsigned short)53934;
unsigned short var_10 = (unsigned short)42967;
unsigned long long int var_11 = 16741916279587757460ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3968752539178617266LL;
unsigned char var_15 = (unsigned char)49;
int zero = 0;
signed char var_16 = (signed char)-101;
int var_17 = 550980797;
int var_18 = 535533080;
long long int var_19 = -500106351330344151LL;
int var_20 = -1180999358;
long long int var_21 = -7013440376194469097LL;
unsigned long long int arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
int arr_8 [13] ;
unsigned short arr_9 [13] [13] ;
int arr_2 [18] ;
unsigned int arr_3 [18] ;
unsigned int arr_4 [18] [18] ;
signed char arr_7 [12] [12] ;
_Bool arr_10 [13] ;
unsigned int arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 823323694663059403ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -2026298253;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29143 : (unsigned short)32119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1602474411;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1478944274U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 3108625646U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 42180571U : 2621800718U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
