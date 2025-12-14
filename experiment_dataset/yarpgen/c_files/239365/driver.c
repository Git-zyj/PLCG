#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3090961056U;
unsigned int var_3 = 1844308835U;
unsigned int var_5 = 3100273683U;
unsigned int var_6 = 2484609658U;
unsigned int var_7 = 1066315772U;
unsigned int var_9 = 902146338U;
unsigned int var_10 = 861593795U;
int zero = 0;
unsigned int var_13 = 678450988U;
unsigned int var_14 = 1508846635U;
unsigned int var_15 = 4164852338U;
unsigned int var_16 = 3931070034U;
unsigned int var_17 = 2040331418U;
unsigned int arr_1 [20] ;
unsigned int arr_2 [20] [20] ;
unsigned int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3002124890U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 729821759U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 3063944212U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
