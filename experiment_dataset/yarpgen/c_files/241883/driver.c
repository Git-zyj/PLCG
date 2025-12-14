#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28621;
unsigned char var_4 = (unsigned char)172;
unsigned char var_7 = (unsigned char)76;
int var_8 = 1346349213;
_Bool var_12 = (_Bool)0;
long long int var_15 = -2356829714791141398LL;
int var_16 = -1771615593;
int zero = 0;
unsigned int var_20 = 1963445805U;
signed char var_21 = (signed char)-118;
long long int var_22 = 7476323064378778185LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -2826018697269382017LL;
unsigned int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3931093237U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 13449003056363418698ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)62570;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
