#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5701;
unsigned short var_2 = (unsigned short)20016;
unsigned short var_4 = (unsigned short)62988;
unsigned int var_6 = 147935476U;
unsigned char var_7 = (unsigned char)118;
unsigned short var_8 = (unsigned short)38710;
short var_9 = (short)23385;
unsigned short var_10 = (unsigned short)12071;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)8;
long long int var_15 = -6489465331946432177LL;
long long int var_17 = 7563697446127170355LL;
unsigned char var_18 = (unsigned char)175;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)24437;
unsigned char var_21 = (unsigned char)14;
unsigned char var_22 = (unsigned char)147;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)18371;
long long int var_28 = 547817303795140478LL;
_Bool arr_0 [16] [16] ;
unsigned char arr_1 [16] [16] ;
int arr_5 [10] ;
int arr_6 [10] [10] ;
_Bool arr_8 [12] ;
unsigned char arr_9 [12] [12] ;
unsigned int arr_10 [12] [12] ;
unsigned char arr_13 [12] ;
int arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
int arr_7 [10] ;
unsigned short arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 891737508;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1287333162;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 1453315777U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1695134429;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)6823;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 2077691904;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)20861;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
