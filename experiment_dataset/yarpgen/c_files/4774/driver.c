#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3846735591U;
short var_5 = (short)-20070;
unsigned short var_7 = (unsigned short)36110;
long long int var_8 = -6638508145257945791LL;
int zero = 0;
unsigned long long int var_10 = 3947006370012626802ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)81;
unsigned long long int var_13 = 2409838309212209167ULL;
unsigned short var_14 = (unsigned short)21829;
short var_15 = (short)28489;
unsigned short var_16 = (unsigned short)55307;
unsigned char var_17 = (unsigned char)242;
unsigned long long int arr_0 [16] [16] ;
int arr_1 [16] ;
int arr_2 [16] ;
int arr_3 [16] ;
signed char arr_4 [16] [16] ;
signed char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 5910944379790386828ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1455482690;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1620181221;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1412914664;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)-122;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
