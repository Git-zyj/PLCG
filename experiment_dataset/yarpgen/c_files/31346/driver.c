#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13940;
short var_5 = (short)6804;
short var_6 = (short)-1053;
short var_7 = (short)22757;
short var_8 = (short)-10565;
short var_9 = (short)2218;
short var_10 = (short)27198;
short var_11 = (short)32306;
short var_13 = (short)-30722;
int zero = 0;
short var_14 = (short)10679;
short var_15 = (short)-1457;
short var_16 = (short)1921;
short var_17 = (short)-8785;
short var_18 = (short)-27250;
short var_19 = (short)-23999;
short var_20 = (short)147;
short var_21 = (short)-28932;
short var_22 = (short)11800;
short arr_8 [11] [11] ;
short arr_12 [10] ;
short arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-1964 : (short)-11147;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)8161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)26836;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
