#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1533306449;
unsigned int var_2 = 4215738943U;
unsigned long long int var_3 = 14849191331117197634ULL;
short var_4 = (short)-18414;
signed char var_6 = (signed char)-100;
unsigned long long int var_8 = 14000243302875415590ULL;
short var_9 = (short)17140;
signed char var_12 = (signed char)85;
signed char var_13 = (signed char)-96;
int zero = 0;
unsigned long long int var_15 = 16696150476990809994ULL;
signed char var_16 = (signed char)34;
unsigned long long int var_17 = 17623555212149570263ULL;
unsigned long long int var_18 = 3844490275518270630ULL;
signed char arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4209127910U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)52227;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
