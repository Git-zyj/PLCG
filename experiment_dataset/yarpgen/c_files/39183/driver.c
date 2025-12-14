#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 59523646;
int var_6 = 1025789551;
_Bool var_8 = (_Bool)0;
int var_9 = -558385330;
int zero = 0;
short var_11 = (short)-7021;
unsigned int var_12 = 2530087320U;
unsigned long long int var_13 = 10106620886822932023ULL;
short var_14 = (short)-24834;
signed char arr_1 [18] ;
unsigned int arr_4 [25] ;
int arr_5 [25] [25] ;
unsigned long long int arr_3 [18] [18] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1339772718U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1314000304;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 7748790369887494142ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 4568578214196137985LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
