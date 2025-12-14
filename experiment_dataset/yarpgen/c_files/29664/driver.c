#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2161660487121147793ULL;
unsigned int var_5 = 1025843069U;
unsigned long long int var_10 = 6367510163013522293ULL;
int zero = 0;
unsigned long long int var_14 = 15697532459668424846ULL;
unsigned int var_15 = 1249012857U;
unsigned long long int var_16 = 7061916769503975077ULL;
unsigned long long int var_17 = 6894346874337881116ULL;
unsigned int var_18 = 917833804U;
unsigned long long int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 7291956115384478594ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
