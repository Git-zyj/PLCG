#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19202;
short var_3 = (short)1640;
long long int var_8 = 8455365341532554183LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 2943386647608853337LL;
unsigned long long int var_11 = 13568519865542529814ULL;
signed char var_14 = (signed char)116;
unsigned short var_15 = (unsigned short)51179;
short var_18 = (short)8784;
int zero = 0;
signed char var_20 = (signed char)-17;
long long int var_21 = 7326381099233340841LL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)111;
signed char var_24 = (signed char)-124;
short var_25 = (short)30427;
unsigned int var_26 = 1170853809U;
long long int var_27 = -5258055462137808413LL;
int var_28 = 518578532;
long long int var_29 = 8893241370483620414LL;
short var_30 = (short)-25759;
unsigned int var_31 = 1727364096U;
short var_32 = (short)-18227;
short var_33 = (short)4274;
unsigned short var_34 = (unsigned short)41267;
long long int var_35 = -7517242004005246744LL;
unsigned short var_36 = (unsigned short)56129;
short var_37 = (short)25747;
int var_38 = 1768659393;
short var_39 = (short)-1295;
unsigned int var_40 = 2151264085U;
signed char arr_0 [24] [24] ;
int arr_1 [24] [24] ;
int arr_2 [24] [24] [24] ;
unsigned char arr_4 [24] ;
int arr_5 [24] ;
_Bool arr_6 [24] ;
short arr_7 [24] ;
unsigned short arr_8 [24] [24] ;
unsigned short arr_9 [24] [24] [24] ;
signed char arr_10 [24] [24] ;
_Bool arr_16 [22] ;
signed char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1478786526 : -399199099;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 26690674 : 1540335488;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1457826688;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)5870 : (short)15659;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49691 : (unsigned short)44303;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)15574 : (unsigned short)33239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-76;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
