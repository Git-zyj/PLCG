#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned int var_1 = 2600313453U;
int var_2 = -1344809946;
signed char var_3 = (signed char)(-127 - 1);
unsigned short var_4 = (unsigned short)40283;
signed char var_5 = (signed char)-64;
signed char var_6 = (signed char)124;
unsigned long long int var_9 = 11269388794836094281ULL;
int var_11 = -1089728597;
unsigned short var_12 = (unsigned short)45895;
unsigned long long int var_13 = 1344046530129085856ULL;
signed char var_14 = (signed char)121;
_Bool var_15 = (_Bool)0;
short var_16 = (short)11061;
int var_17 = -1075222267;
int zero = 0;
unsigned int var_19 = 1412439214U;
unsigned char var_20 = (unsigned char)94;
int var_21 = -499320988;
unsigned char var_22 = (unsigned char)160;
signed char var_23 = (signed char)-45;
unsigned char var_24 = (unsigned char)184;
long long int var_25 = 6371477300166211222LL;
unsigned long long int var_26 = 16060002775112678986ULL;
int var_27 = -1341069421;
int var_28 = 26898429;
int var_29 = -924257766;
long long int arr_0 [13] ;
long long int arr_1 [13] [13] ;
signed char arr_3 [13] ;
unsigned long long int arr_7 [11] [11] ;
unsigned char arr_8 [11] ;
unsigned long long int arr_16 [14] ;
int arr_17 [14] ;
unsigned char arr_18 [25] ;
signed char arr_19 [25] [25] ;
long long int arr_11 [11] ;
unsigned char arr_12 [11] [11] ;
long long int arr_13 [11] ;
int arr_14 [11] [11] ;
int arr_20 [25] [25] ;
unsigned long long int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2105722243119297617LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 361141017681946709LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 10620358750622386228ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 16658280949849366726ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 1333456027;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 1548097732418954376LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 9213855295315865692LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = -2041371202;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = -667344320;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 11163538777143324060ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
