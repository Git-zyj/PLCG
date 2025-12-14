#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned long long int var_1 = 17660639098757398669ULL;
unsigned int var_3 = 3888631599U;
short var_6 = (short)-4714;
unsigned short var_7 = (unsigned short)57060;
short var_9 = (short)32185;
unsigned int var_10 = 1306665278U;
unsigned short var_11 = (unsigned short)38337;
unsigned int var_12 = 3688570985U;
int var_13 = 1022635210;
int var_14 = 1345070572;
int zero = 0;
short var_15 = (short)27188;
unsigned short var_16 = (unsigned short)47722;
unsigned char var_17 = (unsigned char)24;
short var_18 = (short)-22241;
unsigned int var_19 = 605079045U;
unsigned char var_20 = (unsigned char)180;
int var_21 = -2096089838;
unsigned long long int var_22 = 9033959608700327213ULL;
unsigned short var_23 = (unsigned short)62321;
unsigned long long int var_24 = 13341777748654258215ULL;
unsigned long long int arr_0 [24] ;
unsigned char arr_1 [24] ;
long long int arr_5 [12] ;
long long int arr_7 [12] [12] [12] ;
int arr_15 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_16 [12] [12] [12] [12] [12] ;
long long int arr_2 [24] ;
int arr_17 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1381969633587529274ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 5270152664108607435LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 7855488508386338484LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1060840275;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 7464736453349787624LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7911033823327980824LL : -3203685286460074669LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 2067457279;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
