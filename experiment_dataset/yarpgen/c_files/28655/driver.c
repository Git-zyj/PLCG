#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 243092618646303368ULL;
signed char var_6 = (signed char)114;
unsigned long long int var_8 = 10973136276917120052ULL;
int var_9 = -1920832257;
unsigned int var_12 = 3681271743U;
int zero = 0;
short var_13 = (short)26809;
_Bool var_14 = (_Bool)1;
int var_15 = 2049227486;
unsigned long long int var_16 = 754051893784929936ULL;
int var_17 = 1572670295;
unsigned int var_18 = 4016735726U;
signed char arr_0 [12] ;
unsigned int arr_2 [12] [12] ;
signed char arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3257666072U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_13);
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
