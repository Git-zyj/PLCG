#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2866603922813047656LL;
long long int var_4 = 5888846527243530231LL;
long long int var_6 = -1533888390763091854LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 82841042U;
short var_12 = (short)-10517;
unsigned char var_13 = (unsigned char)29;
unsigned short var_16 = (unsigned short)45876;
int zero = 0;
unsigned long long int var_18 = 14722865729724609270ULL;
unsigned char var_19 = (unsigned char)169;
unsigned short var_20 = (unsigned short)63998;
unsigned char var_21 = (unsigned char)73;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)61;
unsigned char var_24 = (unsigned char)183;
int var_25 = -734663365;
_Bool var_26 = (_Bool)0;
short var_27 = (short)24543;
signed char var_28 = (signed char)68;
unsigned short var_29 = (unsigned short)31456;
unsigned short var_30 = (unsigned short)37897;
short arr_0 [11] ;
unsigned int arr_1 [11] ;
long long int arr_3 [11] ;
short arr_4 [11] [11] [11] ;
signed char arr_5 [11] [11] [11] ;
short arr_8 [11] [11] [11] [11] ;
long long int arr_9 [11] [11] [11] ;
_Bool arr_11 [11] [11] [11] ;
long long int arr_14 [12] [12] ;
_Bool arr_15 [12] ;
unsigned short arr_17 [15] [15] ;
short arr_18 [15] ;
short arr_13 [11] ;
_Bool arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)19021;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1701798262U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 634646602687288551LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)29532 : (short)31080;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-28694 : (short)-6791;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4375745139609114297LL : 3819938421632327324LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 6548613164178331290LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)7275;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (short)19946;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-1686 : (short)29931;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
