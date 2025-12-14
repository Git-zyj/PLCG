#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1050821860;
short var_13 = (short)2526;
int zero = 0;
int var_17 = 395562970;
unsigned char var_18 = (unsigned char)49;
signed char var_19 = (signed char)28;
unsigned char var_20 = (unsigned char)65;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)22;
long long int arr_0 [23] ;
unsigned long long int arr_2 [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -6051920264462032839LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 13472099518172002176ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1587251328376367899LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
