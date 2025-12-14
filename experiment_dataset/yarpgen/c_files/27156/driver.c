#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
signed char var_2 = (signed char)85;
int var_3 = 2078468047;
int var_4 = 1652906476;
signed char var_5 = (signed char)104;
long long int var_6 = -941382069064751685LL;
long long int var_7 = -3185354773765941887LL;
int var_9 = -347518953;
signed char var_10 = (signed char)-49;
int zero = 0;
long long int var_11 = -2085236303421657120LL;
signed char var_12 = (signed char)-112;
signed char var_13 = (signed char)-46;
long long int var_14 = -7394353788230067178LL;
long long int var_15 = -2055242201029486120LL;
long long int var_16 = 5952758821266996599LL;
_Bool arr_1 [15] ;
long long int arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6550804153105279755LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -8151708844311762311LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
