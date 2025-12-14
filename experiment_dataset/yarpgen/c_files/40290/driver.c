#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36618;
unsigned long long int var_2 = 2540091690582775262ULL;
short var_6 = (short)-14144;
_Bool var_7 = (_Bool)0;
short var_9 = (short)16155;
unsigned int var_11 = 3846254904U;
int zero = 0;
long long int var_13 = 862071990842169906LL;
unsigned short var_14 = (unsigned short)20366;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)1;
short var_17 = (short)986;
unsigned long long int arr_0 [15] ;
int arr_1 [15] ;
unsigned short arr_4 [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 18248981400480106703ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -304456243;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)2022;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 6610086978862632132ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
