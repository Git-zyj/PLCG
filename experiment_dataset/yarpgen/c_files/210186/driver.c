#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13656055536461972779ULL;
short var_5 = (short)-9929;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-15549;
short var_15 = (short)-6321;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17556876881743177345ULL;
unsigned char var_19 = (unsigned char)177;
short var_20 = (short)-15476;
long long int var_21 = 6918534878726491871LL;
unsigned char var_22 = (unsigned char)210;
long long int var_23 = -1108921464142943124LL;
_Bool arr_0 [15] ;
long long int arr_2 [15] ;
short arr_3 [13] ;
unsigned long long int arr_8 [13] [13] ;
_Bool arr_11 [13] ;
long long int arr_13 [13] [13] ;
short arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2632896960185632184LL : 8066320064066854956LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-5924 : (short)-30335;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 7417308707261671933ULL : 12560323085319356547ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = -5929448616464209969LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)29099 : (short)-5865;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
