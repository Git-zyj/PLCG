#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1322251453U;
unsigned char var_2 = (unsigned char)95;
unsigned int var_3 = 3517910968U;
unsigned int var_4 = 1689928166U;
unsigned char var_5 = (unsigned char)154;
unsigned int var_6 = 4121588783U;
unsigned char var_7 = (unsigned char)197;
unsigned char var_8 = (unsigned char)168;
unsigned int var_9 = 57893462U;
unsigned char var_11 = (unsigned char)43;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)12;
unsigned int var_14 = 2065113560U;
unsigned char var_17 = (unsigned char)221;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
unsigned char var_20 = (unsigned char)221;
unsigned char var_21 = (unsigned char)138;
unsigned char var_22 = (unsigned char)194;
unsigned int arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned int arr_4 [10] [10] [10] ;
unsigned char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 264923514U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 337043249U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 760841297U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4064440730U : 618648662U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)83;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
