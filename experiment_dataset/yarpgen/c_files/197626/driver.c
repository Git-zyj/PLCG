#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6182908790430789064ULL;
short var_4 = (short)3270;
unsigned long long int var_6 = 6349986190909747492ULL;
signed char var_7 = (signed char)83;
long long int var_8 = 8819703469015053108LL;
unsigned long long int var_13 = 78644008849006192ULL;
int zero = 0;
unsigned int var_15 = 563254750U;
unsigned char var_16 = (unsigned char)107;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)75;
signed char var_19 = (signed char)-93;
short var_20 = (short)25581;
unsigned long long int var_21 = 8614773745489025678ULL;
_Bool arr_0 [23] [23] ;
short arr_1 [23] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-26700;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)113;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
