#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned int var_1 = 876376531U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-44;
unsigned int var_5 = 857491026U;
unsigned long long int var_6 = 6621851256733020836ULL;
unsigned int var_7 = 2765912250U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1123839919U;
long long int var_10 = -4086748905520958304LL;
short var_11 = (short)-17991;
unsigned int var_12 = 1891941792U;
unsigned char var_13 = (unsigned char)106;
int zero = 0;
unsigned int var_14 = 1331409646U;
unsigned char var_15 = (unsigned char)122;
unsigned char var_16 = (unsigned char)8;
unsigned char var_17 = (unsigned char)219;
unsigned long long int var_18 = 13307293753308142963ULL;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)53882;
unsigned char var_21 = (unsigned char)196;
unsigned char var_22 = (unsigned char)48;
unsigned long long int var_23 = 1177675124867207940ULL;
unsigned char var_24 = (unsigned char)193;
unsigned long long int var_25 = 11314046511049177910ULL;
unsigned long long int var_26 = 17999268248737722883ULL;
unsigned long long int var_27 = 16045538885637643005ULL;
unsigned int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
long long int arr_3 [22] [22] ;
_Bool arr_4 [22] [22] ;
long long int arr_7 [19] [19] ;
long long int arr_8 [19] [19] ;
int arr_5 [22] ;
unsigned char arr_17 [19] ;
long long int arr_18 [19] ;
_Bool arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2285491670U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 606501105U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 695746587U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -173996280151452465LL : 4093683850594915999LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 2832272787325318100LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 7510764889981019694LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -572183381 : 2071408389;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -5490652687621900434LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
