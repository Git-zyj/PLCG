#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4811;
short var_1 = (short)-32394;
short var_3 = (short)-539;
unsigned int var_4 = 727895019U;
unsigned short var_5 = (unsigned short)4757;
short var_6 = (short)-10761;
unsigned int var_9 = 1656375845U;
int zero = 0;
short var_14 = (short)1090;
int var_15 = -671577844;
long long int var_16 = 5852277014973212064LL;
unsigned char var_17 = (unsigned char)123;
signed char var_18 = (signed char)53;
int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
short arr_5 [17] [17] ;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1217457922;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 655483084U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)1006;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -1651645662;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
