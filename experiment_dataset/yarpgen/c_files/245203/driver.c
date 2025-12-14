#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
unsigned long long int var_3 = 14170004928546665173ULL;
short var_4 = (short)19912;
unsigned long long int var_5 = 13272764994971031136ULL;
long long int var_6 = 3460040176124465164LL;
unsigned short var_7 = (unsigned short)42793;
unsigned char var_10 = (unsigned char)59;
signed char var_11 = (signed char)22;
long long int var_12 = -7996163260956374415LL;
int zero = 0;
unsigned short var_13 = (unsigned short)11793;
unsigned char var_14 = (unsigned char)103;
_Bool var_15 = (_Bool)0;
short var_16 = (short)11652;
long long int var_17 = 2885012360007270058LL;
unsigned short var_18 = (unsigned short)16909;
unsigned int arr_0 [11] [11] ;
short arr_3 [11] ;
unsigned long long int arr_6 [11] ;
unsigned char arr_7 [11] [11] ;
unsigned char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 4146024470U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)30846;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 890154057274967984ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)167;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
