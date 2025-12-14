#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned int var_1 = 2461505306U;
_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8078838243913218321LL;
short var_10 = (short)21014;
int zero = 0;
signed char var_12 = (signed char)29;
short var_13 = (short)30577;
unsigned int var_14 = 2710845308U;
unsigned int var_15 = 1881926035U;
int var_16 = 1309250449;
short var_17 = (short)-17246;
unsigned int arr_0 [13] [13] ;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 4204980855U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
