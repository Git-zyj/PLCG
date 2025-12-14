#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3357326529187578444LL;
unsigned int var_2 = 4049068938U;
unsigned int var_9 = 3726472696U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-62;
unsigned short var_12 = (unsigned short)59752;
short var_13 = (short)24971;
int zero = 0;
int var_15 = 1864550666;
unsigned char var_16 = (unsigned char)191;
int var_17 = 999345720;
unsigned int var_18 = 3499591959U;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3696663655U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 2786706856024762513ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
