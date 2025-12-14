#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
int var_4 = 1721384807;
unsigned short var_5 = (unsigned short)51096;
long long int var_6 = 7753436301778692917LL;
unsigned int var_8 = 3351790907U;
long long int var_9 = 8523207549885710125LL;
int zero = 0;
int var_10 = 1242631297;
unsigned long long int var_11 = 2814932892959890958ULL;
short var_12 = (short)-14951;
unsigned int var_13 = 2301574863U;
int var_14 = 1436282151;
unsigned long long int var_15 = 12064058716871643385ULL;
int var_16 = 890786255;
unsigned short var_17 = (unsigned short)30622;
signed char var_18 = (signed char)92;
unsigned short var_19 = (unsigned short)16851;
unsigned char var_20 = (unsigned char)245;
unsigned long long int var_21 = 3403237562552250269ULL;
unsigned short var_22 = (unsigned short)28953;
unsigned long long int var_23 = 14104326385523967841ULL;
long long int var_24 = -1680994551623792188LL;
unsigned long long int var_25 = 2366001167639406295ULL;
unsigned long long int var_26 = 14043269472796647941ULL;
unsigned int var_27 = 3047280843U;
unsigned int var_28 = 1480360526U;
unsigned long long int var_29 = 4167403333280000201ULL;
long long int var_30 = -2895485868312085409LL;
unsigned char var_31 = (unsigned char)205;
unsigned char var_32 = (unsigned char)144;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)48553;
long long int var_35 = -2022081665067998815LL;
signed char var_36 = (signed char)-21;
unsigned short var_37 = (unsigned short)19106;
long long int var_38 = -6440013185626988367LL;
unsigned short var_39 = (unsigned short)3766;
unsigned int var_40 = 1985507612U;
long long int var_41 = -9011040225184566578LL;
unsigned short var_42 = (unsigned short)57171;
unsigned int var_43 = 2793097635U;
unsigned long long int arr_1 [10] [10] ;
signed char arr_4 [10] [10] ;
unsigned long long int arr_7 [14] ;
int arr_8 [14] ;
long long int arr_9 [14] [14] ;
unsigned char arr_10 [14] [14] ;
unsigned int arr_12 [14] [14] [14] ;
int arr_13 [14] [14] [14] ;
short arr_14 [14] [14] ;
int arr_18 [14] ;
unsigned long long int arr_23 [14] [14] ;
short arr_25 [14] [14] [14] ;
unsigned int arr_28 [14] [14] ;
long long int arr_41 [14] [14] [14] [14] ;
int arr_45 [14] [14] [14] [14] ;
short arr_49 [17] ;
unsigned int arr_50 [17] [17] ;
unsigned short arr_55 [25] ;
int arr_56 [25] ;
unsigned short arr_62 [25] [25] [25] [25] ;
unsigned char arr_15 [14] [14] ;
short arr_16 [14] ;
unsigned short arr_17 [14] [14] [14] ;
unsigned long long int arr_21 [14] ;
int arr_32 [14] [14] ;
_Bool arr_43 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 12864833126317533642ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 619165289192383266ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 2083342508;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -480964520033228060LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3981665338U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -162067685;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-514;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 466775230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 12476005352122375608ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-25524 : (short)24820;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = 1667356043U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6768373827447823811LL : 7092435925910095533LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = -1742176109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_49 [i_0] = (short)17322;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_50 [i_0] [i_1] = 2662596802U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_55 [i_0] = (unsigned short)48126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_56 [i_0] = 1488595937;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)58601 : (unsigned short)7522;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (short)-16984;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)17031;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 10689535549937162157ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? -1227910396 : -410482446;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
