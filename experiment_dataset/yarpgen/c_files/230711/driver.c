#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1871142743U;
unsigned short var_2 = (unsigned short)43874;
signed char var_3 = (signed char)-7;
signed char var_5 = (signed char)22;
unsigned short var_6 = (unsigned short)45969;
unsigned short var_8 = (unsigned short)13596;
short var_10 = (short)20811;
signed char var_13 = (signed char)82;
unsigned short var_14 = (unsigned short)26076;
signed char var_15 = (signed char)119;
int zero = 0;
long long int var_16 = 9080777175697532453LL;
unsigned short var_17 = (unsigned short)29851;
unsigned int var_18 = 3196201275U;
unsigned int var_19 = 1952657865U;
long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 389991400838797950LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 17677394332370068509ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)522;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
