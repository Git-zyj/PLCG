#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3515262426U;
unsigned int var_2 = 776413056U;
unsigned long long int var_3 = 590192488550310790ULL;
long long int var_5 = -7286760915700717344LL;
int var_6 = 1918133799;
_Bool var_7 = (_Bool)0;
short var_8 = (short)24023;
int zero = 0;
int var_10 = 1168124710;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1072458920U;
unsigned int var_13 = 2962865264U;
unsigned int var_14 = 4258575108U;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27897 : (unsigned short)59845;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
