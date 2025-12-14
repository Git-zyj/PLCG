#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)84;
_Bool var_3 = (_Bool)1;
short var_4 = (short)19548;
signed char var_5 = (signed char)-13;
int var_6 = 1911999981;
signed char var_7 = (signed char)46;
unsigned long long int var_8 = 6583568615193859007ULL;
unsigned short var_12 = (unsigned short)2900;
int zero = 0;
int var_13 = 1414355930;
unsigned long long int var_14 = 17583859665560255471ULL;
unsigned short var_15 = (unsigned short)52120;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7035666785346593794ULL;
int var_18 = -2142496602;
unsigned long long int var_19 = 11268465377924427567ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-26779;
short var_22 = (short)-12072;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)52;
signed char var_25 = (signed char)52;
_Bool arr_0 [23] [23] ;
unsigned long long int arr_1 [23] [23] ;
_Bool arr_2 [19] ;
short arr_5 [17] ;
unsigned short arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 6886910143114356984ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-10138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)41026;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
