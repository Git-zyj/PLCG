#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1975860468U;
long long int var_1 = 6191634825810373431LL;
unsigned short var_4 = (unsigned short)24592;
unsigned short var_5 = (unsigned short)36085;
signed char var_8 = (signed char)-42;
int var_10 = 1101556024;
short var_11 = (short)-12454;
int zero = 0;
long long int var_12 = -7588618464635677122LL;
int var_13 = -613656736;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)29624;
unsigned short var_16 = (unsigned short)62389;
unsigned char var_17 = (unsigned char)119;
signed char arr_0 [18] ;
short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-19153;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
