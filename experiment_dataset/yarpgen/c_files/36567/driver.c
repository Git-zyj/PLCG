#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15960;
unsigned long long int var_1 = 15179854390092005405ULL;
short var_3 = (short)24282;
int var_6 = 289731976;
unsigned long long int var_8 = 10339025794545389773ULL;
long long int var_10 = -5502861536419065809LL;
int zero = 0;
unsigned char var_12 = (unsigned char)165;
unsigned char var_13 = (unsigned char)109;
unsigned char var_14 = (unsigned char)100;
unsigned char var_15 = (unsigned char)42;
unsigned char var_16 = (unsigned char)242;
int arr_4 [24] ;
unsigned int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -975783489;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3792575957U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1462192780754876359ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
