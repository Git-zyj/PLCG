#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44110;
signed char var_1 = (signed char)70;
short var_2 = (short)19023;
signed char var_3 = (signed char)52;
signed char var_4 = (signed char)37;
signed char var_5 = (signed char)-78;
unsigned char var_6 = (unsigned char)168;
long long int var_7 = 4453110463575621474LL;
unsigned int var_9 = 810502389U;
unsigned short var_10 = (unsigned short)41475;
unsigned long long int var_11 = 17894060375540070440ULL;
signed char var_12 = (signed char)3;
int zero = 0;
unsigned long long int var_13 = 15671089648947203307ULL;
unsigned long long int var_14 = 5421237866445784363ULL;
unsigned short var_15 = (unsigned short)16229;
short var_16 = (short)-8172;
signed char var_17 = (signed char)98;
unsigned char var_18 = (unsigned char)226;
long long int var_19 = 2810135881400200665LL;
unsigned long long int var_20 = 3516551135756266629ULL;
unsigned int var_21 = 3611313631U;
unsigned short var_22 = (unsigned short)53666;
unsigned short var_23 = (unsigned short)34484;
long long int var_24 = 1402735566372067815LL;
short var_25 = (short)30972;
_Bool var_26 = (_Bool)1;
long long int var_27 = 7085914868622347082LL;
unsigned short arr_2 [10] ;
_Bool arr_3 [10] [10] [10] ;
long long int arr_10 [16] ;
long long int arr_11 [16] ;
short arr_17 [16] ;
long long int arr_18 [16] [16] ;
unsigned char arr_20 [16] ;
signed char arr_8 [11] ;
_Bool arr_9 [11] ;
signed char arr_13 [16] [16] ;
unsigned int arr_21 [16] ;
int arr_22 [16] [16] ;
int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)11115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3643005834600780550LL : 4460020788975305057LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8755140800459838234LL : -8000790296390077336LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)27645 : (short)22268;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = -8377885336045293260LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)118 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 2624818310U : 474830200U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -522233305 : 138156835;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 240990762 : 981153496;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
