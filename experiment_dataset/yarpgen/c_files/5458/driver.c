#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4152278680U;
long long int var_8 = 867329751956597137LL;
signed char var_9 = (signed char)-58;
unsigned long long int var_11 = 2519825394475110096ULL;
int zero = 0;
unsigned int var_14 = 19541494U;
unsigned int var_15 = 3607193924U;
unsigned short var_16 = (unsigned short)52877;
unsigned char var_17 = (unsigned char)252;
long long int var_18 = 4164382552901534596LL;
unsigned int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 708615759U;
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
