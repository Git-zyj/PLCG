#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31348;
short var_3 = (short)7935;
short var_4 = (short)-16001;
short var_6 = (short)-15293;
short var_8 = (short)-6074;
short var_9 = (short)-3103;
short var_10 = (short)6698;
short var_11 = (short)-17350;
short var_12 = (short)-16880;
short var_13 = (short)1980;
short var_15 = (short)5610;
short var_16 = (short)9825;
short var_17 = (short)11138;
short var_18 = (short)-15225;
int zero = 0;
short var_20 = (short)14769;
short var_21 = (short)-16778;
short var_22 = (short)11571;
short var_23 = (short)26157;
short var_24 = (short)-12012;
short var_25 = (short)-3880;
short arr_0 [12] [12] ;
short arr_1 [12] ;
short arr_2 [12] ;
short arr_3 [12] [12] ;
short arr_6 [22] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)21601;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)32416;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)6635;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)12328;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-17330;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-7233 : (short)-17919;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
