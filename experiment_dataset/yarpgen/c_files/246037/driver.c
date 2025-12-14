#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7427;
unsigned long long int var_2 = 16526417822502142818ULL;
unsigned long long int var_7 = 1558923434033250615ULL;
unsigned long long int var_12 = 15018611832025027888ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2786240386734145370LL;
int zero = 0;
long long int var_16 = 1691481318846951740LL;
unsigned short var_17 = (unsigned short)38183;
unsigned char var_18 = (unsigned char)53;
short var_19 = (short)6306;
short var_20 = (short)-25082;
unsigned long long int var_21 = 14456435128885667631ULL;
unsigned char var_22 = (unsigned char)110;
long long int var_23 = -425642806332303386LL;
unsigned char var_24 = (unsigned char)131;
unsigned long long int var_25 = 2177575653752286047ULL;
_Bool var_26 = (_Bool)0;
long long int var_27 = -5677435987303701551LL;
int var_28 = 777759367;
unsigned short var_29 = (unsigned short)20695;
unsigned long long int var_30 = 3951938084740120902ULL;
unsigned char var_31 = (unsigned char)56;
unsigned char var_32 = (unsigned char)126;
unsigned long long int var_33 = 4726805738257683436ULL;
long long int var_34 = -2721878141368537748LL;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
short arr_3 [14] ;
long long int arr_4 [14] [14] [14] ;
short arr_5 [14] ;
unsigned int arr_8 [14] [14] [14] ;
int arr_9 [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] ;
short arr_12 [14] [14] ;
unsigned short arr_16 [14] ;
unsigned int arr_17 [14] ;
short arr_24 [24] ;
unsigned short arr_25 [24] [24] ;
_Bool arr_26 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 8310716002593560117ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 13235042680182896694ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)28593;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6048524047169041852LL : 6710243536185070886LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-20693;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3339168542U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -237953923 : 1116166557;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-24455 : (short)12298;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32307 : (unsigned short)23594;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2303285973U : 2265854896U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (short)-4493;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)62444;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
