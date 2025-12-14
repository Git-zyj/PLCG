#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1492517779U;
long long int var_2 = -2842522867040007150LL;
unsigned long long int var_4 = 5653360436883736128ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3414734880638425652LL;
unsigned char var_8 = (unsigned char)42;
unsigned long long int var_12 = 2679636536027431193ULL;
unsigned int var_13 = 2479894852U;
unsigned int var_14 = 1982101056U;
unsigned int var_15 = 2552753999U;
int zero = 0;
unsigned int var_16 = 485799674U;
long long int var_17 = 3109948100085610531LL;
signed char var_18 = (signed char)-71;
unsigned long long int var_19 = 10265519991037043668ULL;
unsigned long long int var_20 = 6962852383585501839ULL;
unsigned int var_21 = 1496238102U;
unsigned int var_22 = 1423721487U;
unsigned char arr_1 [10] [10] ;
unsigned int arr_2 [10] [10] [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
unsigned short arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 60103746U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3260624539081243757ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)61309;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 12589475155790165276ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
