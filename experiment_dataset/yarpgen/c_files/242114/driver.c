#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13314924403075769260ULL;
unsigned char var_1 = (unsigned char)68;
unsigned char var_2 = (unsigned char)243;
_Bool var_3 = (_Bool)1;
int var_4 = 1599020155;
unsigned long long int var_6 = 12559392667245175981ULL;
signed char var_8 = (signed char)101;
unsigned char var_9 = (unsigned char)175;
unsigned int var_11 = 1822948181U;
unsigned short var_12 = (unsigned short)37613;
unsigned long long int var_13 = 7814070713801029803ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -85515296;
unsigned char var_21 = (unsigned char)49;
unsigned long long int var_22 = 7364868879026141514ULL;
int var_23 = 1291028142;
unsigned long long int var_24 = 9026194683145929682ULL;
unsigned char var_25 = (unsigned char)35;
unsigned int var_26 = 91657497U;
unsigned short var_27 = (unsigned short)63638;
unsigned char var_28 = (unsigned char)123;
short var_29 = (short)-9054;
unsigned short var_30 = (unsigned short)54429;
_Bool var_31 = (_Bool)1;
_Bool var_32 = (_Bool)1;
short var_33 = (short)604;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 4160781399U;
unsigned char var_36 = (unsigned char)141;
int var_37 = -320915703;
int arr_0 [18] [18] ;
_Bool arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
signed char arr_5 [15] ;
unsigned int arr_7 [15] [15] [15] ;
unsigned int arr_13 [15] [15] ;
unsigned char arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -429389615;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2371448010U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 1740161970U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)34 : (unsigned char)8;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
