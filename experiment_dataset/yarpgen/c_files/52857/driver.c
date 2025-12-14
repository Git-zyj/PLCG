#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2792395860U;
long long int var_6 = 5220190258668115703LL;
short var_7 = (short)11728;
signed char var_8 = (signed char)45;
signed char var_10 = (signed char)-28;
signed char var_11 = (signed char)30;
signed char var_13 = (signed char)-16;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14125205627889328313ULL;
unsigned int var_19 = 1946187445U;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 184967283574113464LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
