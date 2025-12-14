#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16056790839261351342ULL;
unsigned int var_2 = 794107899U;
unsigned long long int var_4 = 10787977071652418782ULL;
int var_5 = -2066424344;
long long int var_6 = -2893619507816117072LL;
long long int var_8 = 1700830831875345145LL;
long long int var_9 = -5047146936342634955LL;
unsigned char var_14 = (unsigned char)114;
long long int var_15 = -4585600202735560295LL;
short var_16 = (short)5723;
long long int var_17 = 4222358090452947712LL;
long long int var_18 = -346829097943052008LL;
int zero = 0;
long long int var_19 = -1305980318275169611LL;
int var_20 = 298503911;
long long int var_21 = 723144049405961545LL;
int var_22 = 467329633;
long long int var_23 = 7866534496398044106LL;
unsigned short var_24 = (unsigned short)48394;
unsigned int var_25 = 225878527U;
unsigned char var_26 = (unsigned char)227;
short var_27 = (short)-21459;
unsigned long long int arr_1 [14] ;
short arr_8 [14] [14] [14] [14] ;
unsigned short arr_10 [25] [25] ;
unsigned char arr_11 [25] [25] ;
int arr_12 [25] ;
long long int arr_13 [25] [25] [25] ;
unsigned char arr_14 [25] ;
long long int arr_20 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 12954069381732569959ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)23517;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)54573;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 1266465314;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6416809069710087084LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -1661232537035994423LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
