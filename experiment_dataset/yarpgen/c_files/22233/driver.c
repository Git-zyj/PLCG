#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1600759301;
unsigned int var_10 = 315830966U;
int var_11 = 963681967;
unsigned int var_13 = 3124557851U;
unsigned int var_15 = 2705410885U;
int zero = 0;
int var_20 = -1851198917;
int var_21 = -1554021348;
int var_22 = -940196021;
int arr_0 [10] ;
unsigned int arr_1 [10] ;
int arr_2 [10] ;
unsigned int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1343462073;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2304430360U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 273497975;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3107451527U : 517231400U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
