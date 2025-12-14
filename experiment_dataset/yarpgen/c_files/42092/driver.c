#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9915;
unsigned long long int var_4 = 16794272849866622736ULL;
int var_6 = 1014769886;
unsigned short var_8 = (unsigned short)48653;
unsigned int var_15 = 1771733068U;
int zero = 0;
int var_16 = -1466370633;
unsigned char var_17 = (unsigned char)175;
signed char var_18 = (signed char)4;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13742373965744833114ULL;
int var_21 = 167314899;
long long int var_22 = 7109985376815722955LL;
unsigned char var_23 = (unsigned char)245;
unsigned short var_24 = (unsigned short)29292;
long long int var_25 = 1551451359660164156LL;
short var_26 = (short)-2252;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7790778868430668278ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 12264432347517023307ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
