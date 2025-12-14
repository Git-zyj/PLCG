#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7105109059900723443LL;
_Bool var_6 = (_Bool)1;
int var_7 = -1575814982;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)4277;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)57993;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-18275;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 12263495107237086516ULL;
int var_24 = 1475179754;
unsigned char var_25 = (unsigned char)24;
unsigned short arr_0 [15] ;
long long int arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned int arr_4 [15] [15] ;
short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)36010;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 8737572340125443347LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)35659;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 4040008058U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-1065;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
