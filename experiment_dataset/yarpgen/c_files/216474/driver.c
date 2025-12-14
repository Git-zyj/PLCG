#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2712;
unsigned long long int var_4 = 1632524114682909937ULL;
unsigned char var_5 = (unsigned char)29;
int var_7 = -1087851267;
short var_11 = (short)13262;
int var_12 = 1333598465;
signed char var_15 = (signed char)-97;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-120;
int var_18 = -809229792;
unsigned long long int var_19 = 1333146595754465604ULL;
signed char var_20 = (signed char)-55;
short var_21 = (short)-20248;
long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -1709673148803127101LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)128;
}

void checksum() {
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
