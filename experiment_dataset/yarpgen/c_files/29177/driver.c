#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2427752932U;
unsigned int var_1 = 170266836U;
unsigned int var_2 = 739469768U;
unsigned int var_4 = 1746662603U;
unsigned int var_6 = 3328775190U;
unsigned int var_7 = 50822251U;
unsigned int var_8 = 3989807936U;
unsigned int var_9 = 2343710656U;
unsigned int var_10 = 125908401U;
unsigned int var_11 = 3034179390U;
unsigned int var_12 = 497397728U;
unsigned int var_15 = 2920308453U;
unsigned int var_17 = 1986288148U;
int zero = 0;
unsigned int var_18 = 1468077301U;
unsigned int var_19 = 1430515768U;
unsigned int var_20 = 1316820465U;
unsigned int var_21 = 1376175268U;
unsigned int arr_3 [23] [23] ;
unsigned int arr_8 [23] ;
unsigned int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3623873237U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3746470351U : 1135463126U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3417960875U : 1587286728U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
