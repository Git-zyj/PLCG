#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9427;
short var_4 = (short)-25462;
unsigned char var_6 = (unsigned char)226;
_Bool var_7 = (_Bool)1;
short var_8 = (short)21547;
int var_10 = 1641175332;
int var_12 = -1896560597;
unsigned int var_13 = 1271230769U;
unsigned int var_14 = 2044311484U;
int zero = 0;
short var_15 = (short)-4596;
int var_16 = 365811182;
_Bool var_17 = (_Bool)0;
int var_18 = -174486130;
short var_19 = (short)-5189;
short var_20 = (short)-14943;
_Bool var_21 = (_Bool)1;
int var_22 = -102524280;
unsigned short arr_3 [16] ;
short arr_6 [16] [16] [16] ;
_Bool arr_4 [16] ;
short arr_16 [16] [16] ;
short arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)2809;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)15533;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-25780 : (short)-24408;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (short)-468;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
