#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
long long int var_2 = -8909457362038605544LL;
unsigned long long int var_3 = 12602190316920666157ULL;
unsigned char var_4 = (unsigned char)99;
unsigned char var_6 = (unsigned char)29;
unsigned long long int var_8 = 11068421633574915327ULL;
long long int var_9 = 6087880949310535189LL;
short var_10 = (short)31723;
int zero = 0;
long long int var_11 = 8835939237646942529LL;
long long int var_12 = 2828021252548614046LL;
signed char var_13 = (signed char)65;
unsigned short arr_0 [12] [12] ;
unsigned char arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46695;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)208;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
