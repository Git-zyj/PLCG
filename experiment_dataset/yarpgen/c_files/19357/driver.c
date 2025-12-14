#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_7 = (unsigned char)70;
unsigned long long int var_8 = 4483122144666142420ULL;
int var_10 = 1121463580;
_Bool var_11 = (_Bool)0;
long long int var_15 = 2014963095512591236LL;
unsigned int var_17 = 3829117947U;
short var_18 = (short)-13344;
int zero = 0;
unsigned long long int var_20 = 13324030614401205194ULL;
signed char var_21 = (signed char)107;
short var_22 = (short)-23004;
int var_23 = -1802879191;
unsigned int var_24 = 1574604529U;
int var_25 = -1166358848;
unsigned int arr_0 [10] [10] ;
signed char arr_1 [10] ;
int arr_4 [10] ;
short arr_2 [10] ;
int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3345154165U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2005407256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-13452;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1506839332 : 1852749727;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
