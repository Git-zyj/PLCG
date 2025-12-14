#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1873433380;
unsigned char var_1 = (unsigned char)2;
int var_2 = 339094394;
int var_3 = -1341538713;
unsigned char var_4 = (unsigned char)248;
unsigned char var_5 = (unsigned char)224;
unsigned char var_8 = (unsigned char)20;
int var_11 = -775474846;
unsigned char var_12 = (unsigned char)184;
int var_14 = 177262727;
int var_15 = -688028221;
unsigned char var_16 = (unsigned char)75;
unsigned char var_18 = (unsigned char)243;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned char var_20 = (unsigned char)10;
signed char var_21 = (signed char)26;
int var_22 = -959644438;
unsigned char var_23 = (unsigned char)16;
unsigned char var_24 = (unsigned char)179;
unsigned char var_25 = (unsigned char)44;
unsigned char var_26 = (unsigned char)124;
int var_27 = -279206860;
unsigned char var_28 = (unsigned char)169;
int var_29 = 798827164;
signed char var_30 = (signed char)60;
unsigned char var_31 = (unsigned char)159;
unsigned char var_32 = (unsigned char)102;
int var_33 = 198583903;
signed char arr_1 [11] [11] ;
int arr_3 [11] [11] ;
int arr_5 [11] [11] [11] [11] ;
unsigned char arr_6 [11] [11] [11] [11] ;
unsigned char arr_7 [12] [12] ;
int arr_8 [12] [12] ;
unsigned char arr_9 [12] [12] ;
unsigned char arr_14 [21] ;
unsigned char arr_17 [21] [21] [21] ;
unsigned char arr_21 [21] [21] [21] [21] ;
unsigned char arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1263038507;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -535152806;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = -785932540;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)232;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
