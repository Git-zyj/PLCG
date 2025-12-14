#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 395238611U;
signed char var_5 = (signed char)64;
unsigned char var_6 = (unsigned char)233;
unsigned int var_7 = 3172432063U;
int var_9 = 1798949014;
signed char var_10 = (signed char)114;
unsigned long long int var_11 = 5771928261881090609ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1879149059;
unsigned short var_14 = (unsigned short)35493;
short var_16 = (short)2935;
unsigned char var_17 = (unsigned char)223;
int zero = 0;
short var_18 = (short)27685;
int var_19 = 1803400591;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 17760923967719422763ULL;
unsigned char var_22 = (unsigned char)185;
int var_23 = 2021805371;
short var_24 = (short)4114;
unsigned short arr_1 [21] [21] ;
unsigned char arr_11 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54255;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)112;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
