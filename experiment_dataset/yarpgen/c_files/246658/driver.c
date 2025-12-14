#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2929653948U;
unsigned int var_4 = 1980754943U;
unsigned int var_5 = 2031367555U;
unsigned int var_6 = 3734940688U;
unsigned int var_7 = 2690856450U;
unsigned int var_8 = 3986609566U;
unsigned int var_9 = 1392814337U;
int zero = 0;
unsigned int var_11 = 2976785723U;
unsigned int var_12 = 2546658809U;
unsigned int var_13 = 329107268U;
unsigned int var_14 = 3547797281U;
unsigned int var_15 = 1041018894U;
unsigned int var_16 = 3831312424U;
unsigned int arr_2 [20] ;
unsigned int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3589941167U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 4280143740U : 1799052078U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
