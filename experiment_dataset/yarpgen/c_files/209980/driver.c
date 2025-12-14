#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54139;
long long int var_3 = 1795211769554340532LL;
unsigned int var_7 = 649425593U;
unsigned short var_8 = (unsigned short)23154;
short var_9 = (short)-4767;
short var_11 = (short)-25937;
int zero = 0;
signed char var_13 = (signed char)-32;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)-106;
unsigned short var_16 = (unsigned short)8558;
signed char var_17 = (signed char)-6;
short var_18 = (short)29331;
unsigned short arr_0 [14] ;
long long int arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
long long int arr_3 [14] [14] ;
unsigned int arr_4 [14] ;
unsigned short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)24604;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -583150627109871650LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36668;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 4923284614703182460LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1448988474U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34160 : (unsigned short)47581;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
