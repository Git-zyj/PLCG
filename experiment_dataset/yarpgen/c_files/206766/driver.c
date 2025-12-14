#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1086960385;
unsigned short var_1 = (unsigned short)49916;
signed char var_2 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)1;
long long int var_4 = 1512045166836874135LL;
unsigned short var_5 = (unsigned short)46974;
int var_7 = -1429510557;
unsigned short var_8 = (unsigned short)18692;
unsigned short var_9 = (unsigned short)10637;
int zero = 0;
short var_10 = (short)13218;
long long int var_11 = 2209340375919709390LL;
unsigned int var_12 = 2926565026U;
short var_13 = (short)-10833;
long long int var_14 = 8789178906908324709LL;
long long int var_15 = 6265763570482021637LL;
_Bool arr_0 [15] ;
_Bool arr_2 [15] ;
unsigned int arr_8 [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] ;
unsigned int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3109315809U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 10085283588811971739ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 109118504U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
