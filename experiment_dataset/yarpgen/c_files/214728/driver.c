#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11545;
unsigned short var_3 = (unsigned short)10239;
short var_5 = (short)-14721;
short var_8 = (short)-8247;
long long int var_11 = -2264616880071665905LL;
unsigned long long int var_13 = 3615753302071174335ULL;
short var_14 = (short)16018;
unsigned int var_15 = 4116063656U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 237122963980901944ULL;
unsigned short var_18 = (unsigned short)64526;
signed char var_19 = (signed char)30;
short var_20 = (short)12416;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7873029198399115614ULL : 17321353446839349967ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
