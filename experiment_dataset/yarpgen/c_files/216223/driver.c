#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 365291952;
int var_3 = -175825104;
unsigned long long int var_4 = 2890558941364889570ULL;
int var_7 = 243285040;
int var_8 = 831272236;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)117;
int var_11 = -235512542;
int var_12 = 1535231448;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3727203158U;
long long int var_17 = -2266132904147034867LL;
short var_18 = (short)-19317;
unsigned int arr_0 [13] ;
int arr_1 [13] ;
int arr_2 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1606188060U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1225917798;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1331489357;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 470412275905034104LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
