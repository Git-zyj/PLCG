#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned char var_1 = (unsigned char)16;
unsigned short var_5 = (unsigned short)50680;
int var_6 = 315280062;
unsigned char var_8 = (unsigned char)129;
int zero = 0;
unsigned short var_10 = (unsigned short)51215;
unsigned char var_11 = (unsigned char)10;
unsigned char var_12 = (unsigned char)146;
signed char var_13 = (signed char)-37;
unsigned short var_14 = (unsigned short)21665;
long long int var_15 = 3223372748441672059LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)190;
int var_18 = -32062721;
unsigned int arr_0 [16] ;
short arr_1 [16] [16] ;
unsigned short arr_3 [11] [11] ;
int arr_13 [11] [11] [11] ;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 578433967U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13363;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)62206;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1842347001;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4914888841778877062ULL;
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
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
