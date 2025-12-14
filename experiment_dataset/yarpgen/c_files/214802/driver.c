#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5206213340983326616LL;
int var_1 = -2040853305;
short var_2 = (short)32495;
unsigned int var_3 = 801935284U;
unsigned char var_4 = (unsigned char)60;
short var_5 = (short)-28003;
unsigned long long int var_6 = 17536872958220696810ULL;
int var_7 = -1788035627;
short var_9 = (short)-26470;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
unsigned int var_11 = 3683491675U;
int var_12 = 2129031400;
int var_13 = -333204278;
long long int var_14 = -3130242292700369203LL;
short var_15 = (short)-24509;
unsigned int arr_0 [22] ;
unsigned char arr_1 [22] ;
int arr_2 [22] ;
unsigned char arr_3 [22] ;
int arr_4 [22] [22] [22] ;
int arr_5 [22] [22] ;
int arr_6 [22] [22] [22] ;
short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1087848848U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1296679832;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1456147153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1037718191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -557287173;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)-20312;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
