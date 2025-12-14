#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3393410403U;
signed char var_1 = (signed char)36;
unsigned short var_2 = (unsigned short)18983;
unsigned long long int var_4 = 1096887610094354035ULL;
unsigned long long int var_6 = 53592156967793134ULL;
int var_7 = -654277476;
unsigned int var_8 = 1831318752U;
unsigned short var_9 = (unsigned short)27345;
unsigned short var_10 = (unsigned short)13305;
short var_11 = (short)-5359;
unsigned long long int var_12 = 11953808750053706979ULL;
int var_14 = 1147444465;
int var_15 = 1105201300;
signed char var_16 = (signed char)-114;
short var_18 = (short)20817;
int zero = 0;
int var_20 = 1992853160;
unsigned short var_21 = (unsigned short)56476;
short var_22 = (short)22462;
signed char var_23 = (signed char)-27;
long long int var_24 = 8112572740080985744LL;
unsigned long long int var_25 = 2196851577105644201ULL;
unsigned int var_26 = 1826544383U;
signed char var_27 = (signed char)81;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)36989;
unsigned long long int var_30 = 17661095810295907720ULL;
signed char var_31 = (signed char)75;
int var_32 = -482886344;
unsigned char var_33 = (unsigned char)58;
unsigned int var_34 = 496405659U;
unsigned short var_35 = (unsigned short)27030;
unsigned short var_36 = (unsigned short)6305;
unsigned char arr_3 [21] ;
int arr_12 [21] [21] [21] ;
int arr_13 [21] [21] ;
unsigned long long int arr_19 [21] [21] [21] ;
unsigned int arr_25 [21] [21] ;
unsigned int arr_28 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 561059532;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 1906195772;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10323818150580037137ULL : 17785117709427477403ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = 149298884U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = 2808622846U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
