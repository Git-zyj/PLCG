#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1346763053251775644LL;
_Bool var_2 = (_Bool)0;
int var_3 = -1169941050;
int var_4 = 20411993;
int var_5 = -1700116443;
unsigned short var_6 = (unsigned short)28342;
int var_7 = -672461881;
unsigned short var_8 = (unsigned short)29467;
unsigned short var_9 = (unsigned short)17592;
int var_10 = -899809918;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_14 = 4269377221758022130LL;
int var_15 = -808746925;
int var_16 = 2083654269;
unsigned short var_17 = (unsigned short)43140;
int var_18 = -394915430;
int arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -225259132 : 676107040;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28374 : (unsigned short)52643;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
