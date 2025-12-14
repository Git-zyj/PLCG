#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48937;
unsigned int var_6 = 1291559774U;
int zero = 0;
long long int var_14 = -622415621991404478LL;
unsigned int var_15 = 1611723488U;
signed char var_16 = (signed char)-17;
int var_17 = -547051703;
int arr_0 [11] [11] ;
unsigned int arr_1 [11] ;
signed char arr_2 [11] [11] [11] ;
unsigned short arr_3 [11] [11] ;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 591888336;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2852236618U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)44266;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -1434077344;
}

void checksum() {
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
