#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)205;
unsigned int var_4 = 2666728620U;
int var_5 = 984460701;
unsigned int var_6 = 797904735U;
unsigned char var_7 = (unsigned char)6;
unsigned long long int var_8 = 4161318269879016871ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -778868161;
int var_13 = -1051899489;
signed char var_14 = (signed char)102;
unsigned short var_15 = (unsigned short)45899;
unsigned long long int var_16 = 9255691351927822442ULL;
unsigned long long int var_17 = 16426403304694319258ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 17983366940322623781ULL;
unsigned short arr_0 [13] ;
int arr_2 [13] ;
int arr_3 [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned char arr_9 [13] [13] ;
short arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)64126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2026920445;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1905744580;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 14722806637081313238ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-13183 : (short)15137;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
