#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)10;
unsigned char var_2 = (unsigned char)203;
unsigned char var_3 = (unsigned char)218;
unsigned long long int var_6 = 2958614234411270194ULL;
unsigned short var_7 = (unsigned short)7772;
short var_8 = (short)-29372;
signed char var_9 = (signed char)16;
int zero = 0;
signed char var_10 = (signed char)105;
unsigned int var_11 = 4206893251U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)862;
unsigned int var_14 = 2855649836U;
short var_15 = (short)-7495;
unsigned short var_16 = (unsigned short)10099;
int var_17 = -1523566874;
unsigned short var_18 = (unsigned short)23918;
unsigned short var_19 = (unsigned short)48867;
signed char var_20 = (signed char)-44;
int var_21 = -1755185405;
short var_22 = (short)19224;
short var_23 = (short)-31860;
long long int var_24 = -7274292972810075619LL;
unsigned long long int var_25 = 34543922770202597ULL;
signed char var_26 = (signed char)-55;
unsigned short arr_0 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned short arr_3 [11] [11] ;
long long int arr_4 [12] [12] ;
signed char arr_5 [12] ;
short arr_6 [12] [12] ;
unsigned int arr_8 [12] [12] [12] ;
long long int arr_10 [12] ;
short arr_12 [12] [12] [12] ;
unsigned char arr_13 [12] [12] [12] ;
short arr_14 [12] ;
unsigned int arr_15 [12] [12] ;
signed char arr_18 [12] [12] [12] ;
unsigned int arr_23 [12] [12] ;
_Bool arr_20 [12] [12] [12] [12] ;
unsigned char arr_25 [12] ;
unsigned char arr_26 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3720;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 16776675081973989227ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)63505;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2320247742693291763LL : 2174214834102169635LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)27606;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2673788175U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 7031446467929092202LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)4045;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (short)17509;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 2998025417U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = 2213084143U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (unsigned char)206;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
