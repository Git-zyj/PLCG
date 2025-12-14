#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 532886983U;
unsigned int var_1 = 926693579U;
unsigned short var_2 = (unsigned short)17932;
short var_3 = (short)4352;
unsigned int var_7 = 3133314534U;
signed char var_9 = (signed char)57;
unsigned long long int var_10 = 17482395034912140858ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)661;
unsigned short var_16 = (unsigned short)28189;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)10630;
int var_19 = 1145672744;
unsigned short var_20 = (unsigned short)58663;
short var_21 = (short)-12508;
unsigned short arr_1 [19] ;
int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)37320;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2030621905;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)30713;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2936952649U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
