#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6889;
unsigned short var_2 = (unsigned short)7425;
unsigned short var_5 = (unsigned short)52987;
unsigned short var_7 = (unsigned short)22019;
unsigned short var_10 = (unsigned short)22701;
unsigned short var_11 = (unsigned short)26364;
int zero = 0;
unsigned short var_16 = (unsigned short)7825;
unsigned short var_17 = (unsigned short)12275;
unsigned short var_18 = (unsigned short)10893;
unsigned short var_19 = (unsigned short)53941;
unsigned short var_20 = (unsigned short)6493;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)21764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)46090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)24088;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)1720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)1244;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
