#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6066;
long long int var_1 = 4826938240089569933LL;
int var_5 = 1841450067;
short var_9 = (short)4987;
unsigned long long int var_11 = 360320786731796188ULL;
int zero = 0;
short var_14 = (short)-1592;
int var_15 = 1944739626;
unsigned short var_16 = (unsigned short)20679;
signed char var_17 = (signed char)-44;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)12977;
long long int var_20 = -8383082879042153202LL;
short var_21 = (short)19249;
int arr_3 [18] [18] ;
unsigned short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 977864489 : 1281048811;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22527 : (unsigned short)42584;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
