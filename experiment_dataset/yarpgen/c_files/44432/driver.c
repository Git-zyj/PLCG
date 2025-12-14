#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6116;
int var_1 = 643414496;
_Bool var_2 = (_Bool)0;
long long int var_5 = -1629796207681203170LL;
unsigned long long int var_7 = 466557505474145765ULL;
long long int var_8 = 5523198243465059842LL;
short var_9 = (short)23147;
short var_10 = (short)-16337;
int var_11 = -242119897;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1231866167;
short var_15 = (short)12416;
long long int var_16 = 5164950882476468325LL;
unsigned char var_17 = (unsigned char)17;
_Bool var_18 = (_Bool)0;
_Bool arr_1 [12] ;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1618804994U : 3835294171U;
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
