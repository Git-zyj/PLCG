#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5131072693986249173LL;
unsigned long long int var_1 = 3489055072000942291ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-23402;
signed char var_5 = (signed char)67;
_Bool var_6 = (_Bool)1;
int var_7 = -311416255;
short var_8 = (short)13914;
signed char var_9 = (signed char)7;
long long int var_10 = 3420383720535819982LL;
long long int var_11 = 423870227710315079LL;
unsigned int var_12 = 1280509156U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)24241;
int var_15 = 667656218;
unsigned long long int var_16 = 10860400280039053150ULL;
unsigned int var_17 = 3131821461U;
int var_18 = -635675005;
unsigned long long int var_19 = 8619060735814199633ULL;
unsigned long long int var_20 = 3793675179582445080ULL;
unsigned char var_21 = (unsigned char)122;
int arr_0 [19] ;
_Bool arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1843420258 : 940303458;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3073707314U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
