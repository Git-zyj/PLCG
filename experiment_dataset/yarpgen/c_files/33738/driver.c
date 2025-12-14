#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)25999;
unsigned char var_3 = (unsigned char)233;
long long int var_4 = 8856748472009382576LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_8 = (short)32554;
short var_9 = (short)-7043;
unsigned int var_10 = 3910238902U;
int zero = 0;
signed char var_11 = (signed char)98;
unsigned int var_12 = 4081146884U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)58;
signed char var_15 = (signed char)-10;
unsigned int var_16 = 437009260U;
unsigned char var_17 = (unsigned char)32;
unsigned char arr_2 [17] ;
short arr_7 [23] ;
unsigned long long int arr_4 [17] ;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)12920;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4562305248641777281ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
