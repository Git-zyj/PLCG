#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)185;
long long int var_2 = 5758856420618288509LL;
unsigned char var_3 = (unsigned char)193;
signed char var_4 = (signed char)112;
_Bool var_5 = (_Bool)0;
short var_6 = (short)18911;
unsigned short var_7 = (unsigned short)12641;
int var_8 = -1560192434;
unsigned char var_9 = (unsigned char)135;
_Bool var_10 = (_Bool)1;
long long int var_11 = -812673083101772805LL;
unsigned int var_12 = 3012843395U;
int zero = 0;
short var_13 = (short)15518;
unsigned int var_14 = 4202426512U;
long long int var_15 = 1750229782416940468LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-525;
unsigned int var_18 = 2086591561U;
short var_19 = (short)-4354;
unsigned char var_20 = (unsigned char)135;
long long int var_21 = 3653050400276326279LL;
short var_22 = (short)22617;
unsigned short var_23 = (unsigned short)38553;
unsigned char var_24 = (unsigned char)22;
short var_25 = (short)10926;
signed char arr_2 [13] ;
int arr_22 [13] [13] [13] ;
unsigned short arr_23 [13] [13] [13] ;
short arr_26 [17] ;
unsigned short arr_32 [11] ;
unsigned char arr_33 [11] ;
short arr_34 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -1318301892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)22036;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (short)-28180;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39765 : (unsigned short)29192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned char)246 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)-18036 : (short)-26400;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
