#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32764;
unsigned int var_1 = 3199410744U;
int var_2 = 354153536;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)28;
int var_12 = -1603894694;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
unsigned int var_16 = 1429000942U;
short var_17 = (short)343;
short var_18 = (short)-10562;
unsigned short var_19 = (unsigned short)63374;
unsigned char arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)7;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
