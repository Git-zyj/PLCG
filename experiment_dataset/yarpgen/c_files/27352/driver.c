#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -8793954775333107355LL;
int var_7 = -727126450;
unsigned int var_9 = 2857317838U;
unsigned int var_11 = 1616240747U;
int zero = 0;
signed char var_12 = (signed char)-31;
unsigned char var_13 = (unsigned char)127;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-3556;
unsigned char var_16 = (unsigned char)67;
_Bool var_17 = (_Bool)0;
int var_18 = -225488824;
unsigned char var_19 = (unsigned char)220;
signed char arr_0 [19] ;
int arr_1 [19] [19] ;
unsigned int arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 2061127953;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1287453478U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 14912200040857536630ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 18156941566347629643ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
