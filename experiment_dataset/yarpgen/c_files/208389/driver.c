#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 901471671545945165LL;
unsigned short var_3 = (unsigned short)55683;
short var_5 = (short)720;
short var_7 = (short)24759;
short var_8 = (short)-18100;
short var_10 = (short)12015;
unsigned short var_11 = (unsigned short)3950;
unsigned short var_14 = (unsigned short)44388;
short var_17 = (short)29072;
short var_18 = (short)28297;
int zero = 0;
long long int var_20 = -1519317365568334838LL;
short var_21 = (short)-20558;
short var_22 = (short)-21479;
long long int var_23 = 3250569285052256341LL;
unsigned long long int var_24 = 1640063773426853982ULL;
unsigned char arr_0 [22] ;
_Bool arr_1 [22] [22] ;
_Bool arr_2 [22] [22] ;
short arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-1027;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
