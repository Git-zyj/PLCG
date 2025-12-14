#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4093291536707038678LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2271901995U;
signed char var_5 = (signed char)125;
_Bool var_8 = (_Bool)0;
long long int var_9 = -9207355752104906975LL;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
unsigned short var_12 = (unsigned short)28254;
short var_13 = (short)2387;
int var_14 = -23580838;
signed char var_15 = (signed char)56;
_Bool var_16 = (_Bool)1;
signed char arr_1 [16] [16] ;
unsigned short arr_3 [16] [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28990;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)90;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
