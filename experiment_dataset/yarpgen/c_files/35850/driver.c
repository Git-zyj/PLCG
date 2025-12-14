#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-702;
unsigned short var_2 = (unsigned short)44176;
short var_5 = (short)8218;
unsigned short var_6 = (unsigned short)14691;
unsigned char var_9 = (unsigned char)197;
unsigned short var_12 = (unsigned short)61096;
unsigned long long int var_13 = 3922105166365579440ULL;
int var_14 = 1764252760;
signed char var_17 = (signed char)-43;
unsigned char var_18 = (unsigned char)186;
int zero = 0;
unsigned long long int var_19 = 11543517046158238188ULL;
signed char var_20 = (signed char)88;
unsigned short var_21 = (unsigned short)1619;
unsigned long long int var_22 = 584992765198241039ULL;
unsigned char var_23 = (unsigned char)81;
int var_24 = -1665049644;
int var_25 = 96792467;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 13584477832325023470ULL;
unsigned int var_28 = 872595358U;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
int arr_2 [20] [20] ;
_Bool arr_3 [20] [20] ;
unsigned char arr_4 [20] ;
_Bool arr_5 [20] [20] [20] ;
unsigned char arr_6 [20] [20] [20] [20] ;
unsigned long long int arr_8 [18] ;
short arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 499360409U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1335060506 : 1875779620;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2128658788150324151ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)2944 : (short)13645;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
