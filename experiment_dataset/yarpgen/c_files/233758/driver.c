#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1642526976U;
unsigned int var_2 = 3930330609U;
unsigned int var_3 = 1746882491U;
unsigned int var_4 = 533873876U;
unsigned int var_5 = 1264825137U;
unsigned int var_7 = 967420427U;
unsigned int var_13 = 1295825868U;
int zero = 0;
unsigned int var_15 = 2343001392U;
unsigned int var_16 = 2127633748U;
unsigned int var_17 = 242705999U;
unsigned int var_18 = 3700633351U;
unsigned int var_19 = 1786633046U;
unsigned int var_20 = 3319624270U;
unsigned int arr_7 [13] ;
unsigned int arr_3 [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 3235540287U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1326998641U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2969754995U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
