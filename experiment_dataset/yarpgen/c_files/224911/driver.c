#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7852;
short var_2 = (short)-10678;
unsigned short var_4 = (unsigned short)30757;
unsigned short var_5 = (unsigned short)27958;
short var_6 = (short)31106;
unsigned short var_7 = (unsigned short)29980;
short var_8 = (short)2953;
unsigned short var_13 = (unsigned short)55925;
int zero = 0;
unsigned short var_14 = (unsigned short)2426;
unsigned short var_15 = (unsigned short)56166;
short var_16 = (short)-18672;
short var_17 = (short)25527;
short var_18 = (short)-11664;
unsigned short var_19 = (unsigned short)57939;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned short arr_2 [11] ;
short arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)34713;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)62577;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)23983;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)17997;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
