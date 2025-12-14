#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13685;
unsigned char var_3 = (unsigned char)241;
short var_4 = (short)-13697;
unsigned char var_5 = (unsigned char)199;
unsigned char var_8 = (unsigned char)149;
short var_9 = (short)3976;
unsigned long long int var_10 = 3789447396302807436ULL;
unsigned long long int var_11 = 9885006135188953564ULL;
int zero = 0;
short var_12 = (short)-29075;
short var_13 = (short)8848;
short var_14 = (short)28594;
short var_15 = (short)22570;
unsigned long long int var_16 = 14359748159982313592ULL;
unsigned long long int arr_0 [13] ;
short arr_1 [13] ;
unsigned long long int arr_2 [13] ;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 9623618979508594131ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)16933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 17263828217123289058ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)12350;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
