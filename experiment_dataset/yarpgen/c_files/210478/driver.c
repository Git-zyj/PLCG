#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15274;
unsigned int var_1 = 1295188269U;
short var_2 = (short)2771;
short var_5 = (short)-2022;
short var_6 = (short)28573;
long long int var_9 = -1186614936702428596LL;
unsigned long long int var_11 = 15224840935467390342ULL;
long long int var_15 = -4229509315887535372LL;
int zero = 0;
short var_17 = (short)-20437;
signed char var_18 = (signed char)87;
unsigned long long int var_19 = 9466691325101717251ULL;
unsigned long long int var_20 = 13551584415716278813ULL;
unsigned long long int var_21 = 9268427343374811739ULL;
short var_22 = (short)-8240;
int var_23 = -322407933;
long long int var_24 = 7087093149890282429LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = 2588159778889263847LL;
unsigned short var_27 = (unsigned short)53067;
signed char var_28 = (signed char)0;
int arr_0 [12] [12] ;
short arr_1 [12] ;
unsigned char arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
signed char arr_4 [22] [22] ;
long long int arr_5 [22] ;
signed char arr_7 [22] ;
long long int arr_8 [12] ;
unsigned int arr_11 [12] [12] ;
signed char arr_13 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -263588797;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-18979;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)188 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)59291;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 7302756247992204877LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 7595819896181569217LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 4104656540U : 3333773469U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)-112;
}

void checksum() {
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
