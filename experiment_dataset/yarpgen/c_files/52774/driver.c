#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1092160585U;
unsigned short var_1 = (unsigned short)31882;
unsigned short var_2 = (unsigned short)20998;
signed char var_3 = (signed char)15;
signed char var_4 = (signed char)-73;
long long int var_5 = 3698873858670694243LL;
unsigned int var_6 = 2319375074U;
short var_7 = (short)11472;
long long int var_8 = -4572151092497084134LL;
unsigned int var_9 = 756905723U;
long long int var_10 = 3560309236654491603LL;
int var_11 = 663651596;
int zero = 0;
unsigned char var_12 = (unsigned char)148;
unsigned long long int var_13 = 1026767568759802416ULL;
unsigned short var_14 = (unsigned short)5397;
long long int var_15 = -3352291962550007553LL;
long long int var_16 = -1304864287156914995LL;
unsigned int var_17 = 3220572300U;
long long int var_18 = 3082096854933095077LL;
unsigned int var_19 = 205941145U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)157;
unsigned char var_22 = (unsigned char)219;
short var_23 = (short)-11986;
short var_24 = (short)-9248;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 11104308858173061743ULL;
unsigned int var_27 = 375053451U;
unsigned short var_28 = (unsigned short)52278;
unsigned short var_29 = (unsigned short)31923;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1448155403U;
long long int var_32 = 3035593425818495074LL;
long long int var_33 = 51059618707440315LL;
unsigned char var_34 = (unsigned char)27;
short var_35 = (short)-8027;
short var_36 = (short)987;
long long int var_37 = 3134007441400080767LL;
unsigned int var_38 = 2795534706U;
_Bool var_39 = (_Bool)0;
_Bool arr_1 [18] ;
unsigned char arr_2 [18] [18] [18] ;
unsigned int arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] [18] [18] ;
unsigned int arr_7 [21] [21] ;
unsigned short arr_11 [21] [21] ;
unsigned short arr_13 [21] [21] [21] ;
unsigned char arr_15 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_19 [21] [21] [21] [21] [21] ;
short arr_21 [21] [21] ;
unsigned long long int arr_23 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_25 [21] ;
_Bool arr_37 [21] [21] [21] [21] [21] [21] ;
_Bool arr_42 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2543141982U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 992717922U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 152565338U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)41706;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)49564;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 2058698096U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-16404;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4230904381035844145ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
