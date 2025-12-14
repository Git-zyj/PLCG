#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11178586475272276047ULL;
long long int var_9 = -2698801451858347592LL;
unsigned char var_13 = (unsigned char)122;
unsigned short var_14 = (unsigned short)34280;
int zero = 0;
unsigned long long int var_15 = 8899280617139247719ULL;
int var_16 = 1170207078;
unsigned short var_17 = (unsigned short)34797;
long long int var_18 = -8083054739083850931LL;
long long int var_19 = 4445151427468596345LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)73;
int var_22 = 1625596301;
long long int var_23 = 2480275728905664074LL;
unsigned int var_24 = 812824439U;
long long int var_25 = 550373121435176618LL;
unsigned int var_26 = 3909448924U;
long long int var_27 = 5414821822640328618LL;
short var_28 = (short)-22112;
int var_29 = 264091445;
unsigned int var_30 = 1014492125U;
short var_31 = (short)30709;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] ;
int arr_2 [15] ;
long long int arr_3 [15] ;
unsigned int arr_4 [15] [15] ;
unsigned int arr_7 [15] [15] [15] [15] ;
_Bool arr_8 [15] [15] [15] ;
unsigned int arr_13 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_15 [15] ;
_Bool arr_17 [15] [15] [15] [15] [15] [15] [15] ;
short arr_21 [16] [16] ;
unsigned int arr_22 [16] [16] ;
unsigned int arr_25 [18] ;
long long int arr_26 [18] ;
short arr_27 [20] ;
long long int arr_28 [20] [20] ;
short arr_11 [15] [15] ;
long long int arr_12 [15] [15] [15] [15] [15] [15] ;
int arr_19 [15] [15] [15] ;
_Bool arr_20 [15] ;
unsigned short arr_29 [20] [20] ;
short arr_30 [20] ;
short arr_31 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1740564092;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8961424567318823053LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1203522487U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 437985232U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2655941346U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 7258056658585706133ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-8353;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = 2107315638U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = 2421890066U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 4172863194734423735LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (short)-24988;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = -8332813382147233323LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (short)23819;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2264929647929951481LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -26291926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)58422;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (short)24668;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (short)-31405;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
