#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 1123665359243373508ULL;
unsigned short var_4 = (unsigned short)17465;
unsigned short var_9 = (unsigned short)60301;
unsigned int var_10 = 743337135U;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)190;
int var_14 = -1198504159;
unsigned short var_15 = (unsigned short)1651;
unsigned int var_16 = 46909867U;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
unsigned short var_18 = (unsigned short)53273;
short var_19 = (short)-26226;
_Bool arr_1 [13] ;
unsigned int arr_3 [13] [13] ;
short arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2252668218U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-4276;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3415481096U : 1414738626U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
