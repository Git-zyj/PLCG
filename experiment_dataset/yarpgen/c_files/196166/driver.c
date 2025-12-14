#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7676589463114990499ULL;
long long int var_8 = 6341321788780442875LL;
unsigned long long int var_10 = 2596450743560946791ULL;
long long int var_12 = 1733709110066067571LL;
int var_14 = -113861286;
short var_16 = (short)-31;
int zero = 0;
unsigned int var_17 = 1534821037U;
long long int var_18 = -4160928419237320520LL;
unsigned char var_19 = (unsigned char)96;
unsigned char var_20 = (unsigned char)168;
unsigned int arr_0 [10] ;
_Bool arr_1 [10] ;
long long int arr_2 [10] ;
unsigned long long int arr_4 [10] ;
unsigned int arr_6 [10] ;
unsigned int arr_7 [10] ;
long long int arr_3 [10] ;
long long int arr_8 [10] ;
unsigned int arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1963773839U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 5899728425794412030LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 11337716528518041393ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3518098662U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 590417649U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1556145297111895538LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1935952052715390954LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 4209176258U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
