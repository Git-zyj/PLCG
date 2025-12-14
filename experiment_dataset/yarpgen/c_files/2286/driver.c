#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
signed char var_2 = (signed char)38;
unsigned int var_3 = 2006464374U;
unsigned char var_4 = (unsigned char)158;
int var_10 = 1364143511;
unsigned long long int var_11 = 17420817306358430841ULL;
signed char var_12 = (signed char)60;
unsigned long long int var_13 = 6233886535313076503ULL;
short var_14 = (short)4775;
unsigned char var_15 = (unsigned char)98;
int zero = 0;
signed char var_19 = (signed char)-69;
short var_20 = (short)-19155;
unsigned int var_21 = 712226454U;
unsigned int var_22 = 3736319669U;
long long int var_23 = 3341346966774961646LL;
short var_24 = (short)17741;
long long int var_25 = 8354075187794460847LL;
unsigned int var_26 = 1263691700U;
long long int var_27 = -3756332724301418579LL;
unsigned int var_28 = 3592369639U;
short arr_0 [10] ;
short arr_2 [10] [10] [10] ;
unsigned short arr_3 [10] [10] ;
unsigned char arr_4 [10] ;
signed char arr_8 [15] ;
long long int arr_9 [15] [15] ;
signed char arr_10 [15] [15] ;
signed char arr_11 [15] ;
int arr_12 [15] ;
short arr_6 [10] [10] ;
long long int arr_7 [10] ;
unsigned int arr_15 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)23243;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-13659;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)62910;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 1226600909859052566LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 742190148;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)844 : (short)22820;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -2491237627254720014LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 2406006182U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
