#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3335268832286820815LL;
unsigned int var_2 = 89366781U;
short var_3 = (short)-821;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 247142152U;
long long int var_6 = 6035899477887571773LL;
long long int var_7 = -141015534361280995LL;
long long int var_8 = 9123899643208753803LL;
long long int var_11 = -9201766155029128906LL;
int var_12 = -1205367791;
int zero = 0;
unsigned long long int var_13 = 17582075787475327182ULL;
unsigned int var_14 = 3508255996U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)17301;
signed char var_17 = (signed char)10;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2232594892U;
unsigned int arr_0 [16] ;
unsigned long long int arr_2 [16] [16] ;
short arr_3 [16] [16] [16] ;
int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2716985218U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 11264670572368890144ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)24846;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -311740086;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
