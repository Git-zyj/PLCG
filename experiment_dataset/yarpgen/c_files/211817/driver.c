#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
long long int var_2 = -2631212227303086187LL;
int var_3 = 132602945;
unsigned int var_5 = 4040197419U;
unsigned int var_7 = 3536596903U;
long long int var_8 = -7740426979512349744LL;
int var_9 = -2079908651;
short var_10 = (short)16383;
short var_11 = (short)-596;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)62821;
unsigned long long int var_14 = 13036722450438075035ULL;
unsigned short var_15 = (unsigned short)16999;
unsigned long long int var_16 = 6238658389831533847ULL;
unsigned short var_17 = (unsigned short)43592;
int zero = 0;
unsigned int var_18 = 4043993504U;
unsigned long long int var_19 = 12639987753163839637ULL;
long long int var_20 = -5048069923176595957LL;
unsigned short var_21 = (unsigned short)31719;
unsigned long long int var_22 = 7291899344879783656ULL;
unsigned long long int var_23 = 4878842567494108649ULL;
unsigned long long int var_24 = 8435699096881242335ULL;
unsigned int var_25 = 2334139327U;
short var_26 = (short)-18657;
unsigned char var_27 = (unsigned char)2;
short var_28 = (short)-242;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)64720;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)224;
int arr_9 [12] [12] [12] ;
int arr_17 [12] [12] ;
unsigned long long int arr_18 [12] [12] ;
short arr_23 [17] ;
long long int arr_27 [17] [17] [17] ;
unsigned int arr_39 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 29882911 : 612243378;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 982843312;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = 5606666731359223303ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (short)-27179;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -2061802712761529215LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = 2613080049U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
