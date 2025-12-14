#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
signed char var_1 = (signed char)-70;
unsigned long long int var_2 = 532788995587523686ULL;
unsigned long long int var_3 = 5274937393059938633ULL;
unsigned short var_4 = (unsigned short)2236;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)253;
signed char var_7 = (signed char)-60;
unsigned char var_8 = (unsigned char)8;
unsigned char var_9 = (unsigned char)31;
unsigned int var_10 = 2123737974U;
unsigned char var_11 = (unsigned char)50;
long long int var_13 = -6523354163725634214LL;
short var_14 = (short)-3200;
int zero = 0;
unsigned char var_15 = (unsigned char)203;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-94;
short var_18 = (short)18338;
int var_19 = -1880850707;
signed char var_20 = (signed char)-89;
unsigned short var_21 = (unsigned short)12716;
unsigned char var_22 = (unsigned char)169;
short var_23 = (short)2292;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned char arr_3 [14] [14] [14] ;
unsigned int arr_6 [14] [14] ;
unsigned long long int arr_9 [14] [14] ;
long long int arr_12 [14] [14] [14] [14] ;
int arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)57862;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 4019787664U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 7350232579108880541ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -3240181005414350955LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 747837586;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
