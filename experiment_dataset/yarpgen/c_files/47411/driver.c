#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)27340;
short var_2 = (short)11447;
unsigned short var_8 = (unsigned short)52194;
int zero = 0;
unsigned long long int var_13 = 12813740880361898959ULL;
unsigned int var_14 = 139184907U;
unsigned int var_15 = 754907868U;
long long int var_16 = 4711095495966951400LL;
unsigned long long int var_17 = 2650956944507087940ULL;
int var_18 = -515961562;
short arr_1 [11] ;
unsigned short arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)29028;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)49729;
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
