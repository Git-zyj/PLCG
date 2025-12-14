#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 47401578U;
unsigned int var_1 = 751228144U;
signed char var_3 = (signed char)-54;
unsigned int var_6 = 426238783U;
signed char var_8 = (signed char)-59;
int zero = 0;
unsigned int var_12 = 193720956U;
signed char var_13 = (signed char)-56;
signed char var_14 = (signed char)-113;
unsigned int var_15 = 2816122290U;
unsigned int var_16 = 2717157953U;
unsigned int var_17 = 2332029975U;
unsigned int arr_6 [24] [24] ;
unsigned int arr_7 [24] [24] ;
unsigned int arr_3 [10] ;
unsigned int arr_4 [10] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 815250483U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 543440704U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3909793484U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2610284664U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)20;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
