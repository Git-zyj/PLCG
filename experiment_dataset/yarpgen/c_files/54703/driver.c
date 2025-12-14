#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18561;
int var_1 = 1806782988;
signed char var_2 = (signed char)43;
long long int var_3 = -7365326012506439095LL;
signed char var_4 = (signed char)5;
int var_5 = -110816393;
signed char var_6 = (signed char)78;
unsigned long long int var_7 = 14403274715041637008ULL;
signed char var_8 = (signed char)102;
unsigned char var_10 = (unsigned char)165;
unsigned short var_11 = (unsigned short)32933;
signed char var_12 = (signed char)-121;
unsigned char var_13 = (unsigned char)196;
int zero = 0;
unsigned int var_14 = 382626866U;
signed char var_15 = (signed char)69;
unsigned long long int arr_4 [16] [16] [16] ;
signed char arr_5 [16] [16] [16] ;
unsigned short arr_6 [16] [16] ;
signed char arr_11 [24] ;
short arr_12 [24] ;
_Bool arr_15 [21] ;
unsigned long long int arr_16 [21] ;
unsigned short arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12998609548238819300ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)47087;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (short)-28062;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = 9594330621479242364ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)12225;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
