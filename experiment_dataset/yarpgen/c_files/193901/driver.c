#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13990250964721779549ULL;
long long int var_2 = 121122650663617774LL;
unsigned long long int var_3 = 17371002642204002474ULL;
short var_12 = (short)-15683;
unsigned int var_13 = 3389688698U;
int zero = 0;
long long int var_15 = -1535938302448275729LL;
int var_16 = -1171720554;
unsigned long long int var_17 = 1479484192846517615ULL;
long long int var_18 = -2328595469773243008LL;
short arr_6 [11] [11] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-16953;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)6739;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
