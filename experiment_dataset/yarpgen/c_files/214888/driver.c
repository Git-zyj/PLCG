#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)27407;
int var_3 = -411723149;
unsigned int var_4 = 336417263U;
unsigned long long int var_6 = 6616894470658948057ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-20;
unsigned int var_9 = 128215433U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)29264;
signed char var_14 = (signed char)43;
long long int var_16 = -724558875230802697LL;
int var_17 = -1195064407;
int zero = 0;
signed char var_18 = (signed char)7;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1515573797564337897LL;
unsigned long long int var_21 = 8838204952881935523ULL;
unsigned short var_22 = (unsigned short)61325;
long long int var_23 = 6426739606001553573LL;
signed char var_24 = (signed char)-94;
int var_25 = 1099644967;
long long int var_26 = -1515132444767431495LL;
unsigned char arr_1 [11] ;
int arr_6 [11] [11] ;
signed char arr_7 [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
int arr_20 [19] ;
short arr_24 [19] [19] [19] ;
long long int arr_25 [19] ;
signed char arr_17 [11] [11] [11] [11] [11] ;
unsigned short arr_18 [11] ;
short arr_19 [11] ;
signed char arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 1301455017;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-26921;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = -709094536;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)30877;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = -1614625536630445125LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)96 : (signed char)-126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26535 : (unsigned short)23567;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (short)28182;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)-18 : (signed char)-86;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
