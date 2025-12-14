#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
int var_5 = 1745559610;
signed char var_6 = (signed char)-98;
unsigned short var_7 = (unsigned short)57541;
unsigned short var_10 = (unsigned short)30876;
int var_11 = -1937681199;
unsigned long long int var_13 = 11740171466175998918ULL;
short var_14 = (short)25212;
short var_16 = (short)25929;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
short var_18 = (short)-20559;
unsigned int var_19 = 3353886135U;
short var_20 = (short)-13305;
unsigned char var_21 = (unsigned char)123;
unsigned long long int var_22 = 6786353223126540698ULL;
unsigned short var_23 = (unsigned short)42183;
unsigned short var_24 = (unsigned short)21191;
unsigned long long int var_25 = 15858408295398827040ULL;
unsigned long long int arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned short arr_5 [21] ;
unsigned char arr_6 [21] [21] ;
unsigned long long int arr_8 [21] ;
unsigned long long int arr_9 [21] ;
unsigned long long int arr_10 [21] ;
unsigned int arr_4 [22] [22] ;
int arr_7 [21] ;
unsigned int arr_13 [21] ;
unsigned char arr_14 [21] ;
unsigned long long int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8626393023293925833ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 963178012U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)56640;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 8684220405723915963ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 14722169805289591735ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 12240382412487802986ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 2808832145U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -1143008822;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 620098263U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 9783633948863328846ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
