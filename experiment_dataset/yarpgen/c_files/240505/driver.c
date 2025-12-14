#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13515;
short var_3 = (short)-634;
int var_4 = 1540498088;
int var_6 = 160175172;
short var_7 = (short)-26539;
int zero = 0;
short var_10 = (short)28894;
int var_11 = -228525796;
unsigned short var_12 = (unsigned short)64257;
short var_13 = (short)-29336;
unsigned short var_14 = (unsigned short)41646;
int var_15 = -1301300670;
int arr_1 [20] ;
int arr_5 [24] ;
unsigned short arr_6 [24] ;
unsigned short arr_7 [24] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 308563312 : 1072238635;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1454647298;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)6543;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)56334;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24388 : (unsigned short)64267;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
