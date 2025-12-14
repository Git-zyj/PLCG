#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4859108828055322584LL;
long long int var_2 = 6512820237352271446LL;
short var_3 = (short)-1721;
unsigned short var_6 = (unsigned short)50470;
unsigned long long int var_10 = 13933495061584097501ULL;
unsigned char var_11 = (unsigned char)170;
unsigned int var_12 = 379387399U;
int zero = 0;
unsigned short var_17 = (unsigned short)25054;
signed char var_18 = (signed char)-50;
long long int var_19 = -6223562759308316730LL;
unsigned long long int var_20 = 15443541742595074942ULL;
unsigned char var_21 = (unsigned char)207;
long long int arr_1 [23] ;
long long int arr_5 [24] ;
long long int arr_2 [23] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3681075272140793805LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -2840499735788481642LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -31809995307418805LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14598451500043905322ULL : 11089103140254461565ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
