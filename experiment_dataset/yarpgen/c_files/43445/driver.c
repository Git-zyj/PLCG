#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)116;
unsigned short var_2 = (unsigned short)63703;
unsigned long long int var_3 = 8921120192538141569ULL;
unsigned long long int var_4 = 741287614648027677ULL;
int var_6 = -1470867421;
long long int var_7 = 5129903477057774472LL;
short var_8 = (short)-17634;
unsigned long long int var_10 = 9528483590797528966ULL;
unsigned char var_11 = (unsigned char)220;
unsigned int var_12 = 1962452516U;
unsigned char var_13 = (unsigned char)165;
int var_14 = 1087154322;
short var_15 = (short)-26006;
unsigned long long int var_16 = 13870148361439082500ULL;
int var_17 = 1436632257;
int zero = 0;
short var_18 = (short)11466;
_Bool var_19 = (_Bool)0;
int var_20 = 1152964756;
short var_21 = (short)-16975;
unsigned int var_22 = 22658371U;
_Bool var_23 = (_Bool)1;
long long int var_24 = 4332776350806430785LL;
long long int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned char arr_4 [11] ;
unsigned long long int arr_7 [14] ;
int arr_9 [14] ;
unsigned int arr_10 [14] ;
int arr_2 [15] [15] ;
unsigned int arr_5 [11] ;
signed char arr_6 [11] [11] ;
unsigned long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 5160136362567779382LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 5126429647470348706ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 2012358849;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 894130520U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -774226139;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2623715469U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 9767763050451572953ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
