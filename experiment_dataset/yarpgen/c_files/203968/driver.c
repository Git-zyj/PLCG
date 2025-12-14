#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1436930358U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7238167773660970758ULL;
short var_6 = (short)-7720;
int zero = 0;
short var_13 = (short)-15986;
int var_14 = 1968648069;
long long int var_15 = -8222454543976832046LL;
int var_16 = 1590176450;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1527933761U;
int arr_0 [10] ;
unsigned int arr_2 [10] ;
signed char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1361360616;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1208665263U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)97;
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
