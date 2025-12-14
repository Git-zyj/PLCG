#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-9443;
int var_6 = -367593319;
unsigned char var_9 = (unsigned char)196;
unsigned long long int var_10 = 10330783016023294879ULL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)15;
int var_16 = -1743534532;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = -2068114986;
short var_21 = (short)13378;
unsigned short var_22 = (unsigned short)47531;
int var_23 = 608334012;
unsigned char var_24 = (unsigned char)138;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
long long int var_27 = 3382940333824596287LL;
int var_28 = -1183446723;
int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned short arr_6 [23] ;
unsigned short arr_13 [24] ;
int arr_3 [23] ;
_Bool arr_7 [23] [23] ;
short arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1074593442;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 17907575639199702784ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)7312;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)49562;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 412696321 : -349373955;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-22414;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
