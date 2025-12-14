#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 516224740U;
unsigned long long int var_5 = 7383195256822624466ULL;
unsigned char var_7 = (unsigned char)183;
unsigned char var_8 = (unsigned char)98;
unsigned int var_10 = 1284218207U;
signed char var_11 = (signed char)86;
int zero = 0;
short var_12 = (short)15592;
unsigned long long int var_13 = 8043887567636234022ULL;
unsigned int var_14 = 1769771099U;
_Bool var_15 = (_Bool)1;
int var_16 = 1932788013;
short var_17 = (short)-10043;
unsigned long long int var_18 = 11333739828533820890ULL;
unsigned long long int arr_0 [15] ;
signed char arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned short arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 11772345638084768041ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)6611;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)33191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 15497521183955657968ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
