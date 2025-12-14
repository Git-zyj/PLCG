#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4515215129407374952ULL;
unsigned int var_3 = 1685457269U;
long long int var_4 = 2414071250520838731LL;
unsigned short var_5 = (unsigned short)63934;
unsigned int var_7 = 870002657U;
signed char var_9 = (signed char)1;
long long int var_10 = -6626514264228301155LL;
int zero = 0;
int var_11 = -1349433;
signed char var_12 = (signed char)27;
unsigned int var_13 = 2919706249U;
unsigned short var_14 = (unsigned short)15868;
unsigned char var_15 = (unsigned char)11;
unsigned short var_16 = (unsigned short)32677;
unsigned int var_17 = 2168483438U;
int var_18 = -943864262;
unsigned short var_19 = (unsigned short)20843;
signed char var_20 = (signed char)22;
unsigned long long int var_21 = 12892765694105337403ULL;
int var_22 = -1781241361;
unsigned int var_23 = 3832311813U;
signed char var_24 = (signed char)19;
signed char var_25 = (signed char)-42;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-2;
unsigned int var_28 = 1627090025U;
unsigned short arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
long long int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
signed char arr_5 [22] [22] [22] ;
long long int arr_10 [22] ;
int arr_11 [14] [14] ;
signed char arr_13 [14] ;
int arr_20 [14] ;
int arr_23 [14] [14] [14] ;
unsigned long long int arr_2 [22] ;
_Bool arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] ;
short arr_19 [14] [14] ;
unsigned int arr_26 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)35153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 16937291331868219840ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -2467311747906718660LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 575135051U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -7695404200638853176LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -270568639;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 529980766;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -2128932821;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 16756978517396527576ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2411 : (short)28438;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = 953542074U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
