#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6296;
unsigned char var_2 = (unsigned char)200;
unsigned int var_3 = 4056576402U;
unsigned short var_4 = (unsigned short)9104;
unsigned long long int var_5 = 2021749463422423946ULL;
short var_6 = (short)-30530;
short var_7 = (short)-22718;
unsigned int var_8 = 1348904983U;
unsigned char var_9 = (unsigned char)38;
unsigned char var_10 = (unsigned char)36;
unsigned short var_12 = (unsigned short)64068;
long long int var_13 = 1012766146770764123LL;
unsigned char var_14 = (unsigned char)208;
int zero = 0;
unsigned short var_16 = (unsigned short)42302;
long long int var_17 = -99870783307533259LL;
unsigned char var_18 = (unsigned char)118;
long long int var_19 = 5746773048082314598LL;
long long int var_20 = -7223329025011405260LL;
unsigned short var_21 = (unsigned short)39997;
unsigned short var_22 = (unsigned short)65374;
unsigned short var_23 = (unsigned short)3709;
unsigned char var_24 = (unsigned char)154;
short var_25 = (short)-29972;
long long int var_26 = 3325885517767854742LL;
unsigned int var_27 = 1676815841U;
signed char var_28 = (signed char)99;
unsigned long long int arr_5 [21] [21] ;
signed char arr_6 [21] ;
_Bool arr_7 [23] ;
unsigned long long int arr_8 [23] [23] ;
signed char arr_13 [23] [23] [23] [23] ;
unsigned long long int arr_14 [23] [23] [23] [23] [23] ;
unsigned char arr_15 [23] [23] [23] [23] [23] ;
unsigned char arr_3 [15] ;
_Bool arr_4 [15] ;
unsigned short arr_17 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 15671690415099592761ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 8049624060190677540ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 8269050747407526468ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)24181 : (unsigned short)50434;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
