#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6671046838295898458LL;
unsigned short var_2 = (unsigned short)905;
unsigned short var_4 = (unsigned short)7213;
short var_6 = (short)-22901;
unsigned short var_7 = (unsigned short)23502;
unsigned char var_10 = (unsigned char)51;
unsigned short var_11 = (unsigned short)28870;
unsigned short var_12 = (unsigned short)60671;
int zero = 0;
unsigned short var_14 = (unsigned short)30040;
unsigned int var_15 = 2854053984U;
int var_16 = 990902646;
long long int var_17 = -1890316438278141168LL;
unsigned char var_18 = (unsigned char)224;
unsigned short var_19 = (unsigned short)55964;
signed char var_20 = (signed char)25;
unsigned long long int var_21 = 15177296853674380899ULL;
unsigned int arr_5 [18] [18] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 2923513730U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1379458102U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
