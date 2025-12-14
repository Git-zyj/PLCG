#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 819350440;
short var_2 = (short)-13888;
unsigned short var_4 = (unsigned short)42173;
unsigned long long int var_5 = 11381085344357964792ULL;
long long int var_7 = 5929255233010527480LL;
unsigned short var_8 = (unsigned short)31330;
unsigned int var_9 = 3463373759U;
unsigned char var_11 = (unsigned char)107;
_Bool var_12 = (_Bool)0;
short var_13 = (short)303;
short var_15 = (short)-16829;
unsigned long long int var_16 = 36796590660976810ULL;
int zero = 0;
unsigned long long int var_19 = 5464146015620926673ULL;
long long int var_20 = -214795411181748148LL;
short var_21 = (short)-17228;
signed char var_22 = (signed char)61;
unsigned char var_23 = (unsigned char)65;
unsigned long long int var_24 = 2507310955542887226ULL;
signed char var_25 = (signed char)-71;
short var_26 = (short)-23589;
signed char var_27 = (signed char)60;
unsigned char var_28 = (unsigned char)118;
long long int var_29 = -8750421182895142101LL;
int var_30 = -114519242;
long long int var_31 = 5034419947896976740LL;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)2323;
unsigned short var_34 = (unsigned short)24864;
_Bool var_35 = (_Bool)1;
int var_36 = -1747707747;
short var_37 = (short)-22523;
unsigned char var_38 = (unsigned char)110;
signed char var_39 = (signed char)-90;
signed char var_40 = (signed char)-11;
unsigned char var_41 = (unsigned char)203;
signed char var_42 = (signed char)102;
short var_43 = (short)22950;
int arr_1 [22] ;
int arr_3 [22] [22] [22] ;
short arr_9 [22] [22] [22] ;
_Bool arr_11 [21] ;
short arr_13 [21] [21] [21] ;
unsigned short arr_17 [21] [21] [21] ;
short arr_22 [21] [21] ;
short arr_30 [25] ;
long long int arr_31 [25] ;
int arr_32 [25] ;
int arr_33 [25] ;
signed char arr_34 [25] [25] [25] ;
unsigned int arr_35 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1125621668 : 642478960;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1331579512;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-7584 : (short)-21601;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)12954 : (short)-6520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)50205 : (unsigned short)1098;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-10268;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (short)-32521;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = -1644047092640641630LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 1682091030;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = 291675198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 1961174214U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
