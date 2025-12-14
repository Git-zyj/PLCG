#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 612632235708297920LL;
unsigned short var_8 = (unsigned short)63644;
int var_9 = 1933334700;
unsigned long long int var_10 = 10310478354780441362ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-8282;
unsigned short var_14 = (unsigned short)57330;
unsigned int var_15 = 1546262506U;
signed char var_16 = (signed char)45;
signed char var_17 = (signed char)-94;
short var_18 = (short)-23298;
signed char arr_0 [11] ;
_Bool arr_5 [11] [11] ;
unsigned long long int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 4959760624740812950ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
