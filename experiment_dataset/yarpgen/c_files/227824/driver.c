#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
short var_1 = (short)-23611;
signed char var_2 = (signed char)-93;
short var_4 = (short)27931;
signed char var_7 = (signed char)100;
short var_8 = (short)24392;
short var_9 = (short)15289;
short var_10 = (short)1526;
short var_11 = (short)17059;
int zero = 0;
signed char var_12 = (signed char)3;
short var_13 = (short)-22768;
short var_14 = (short)30243;
short var_15 = (short)4847;
short var_16 = (short)21989;
short var_17 = (short)-7422;
short arr_18 [25] ;
short arr_19 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (short)24853;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-15067;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
