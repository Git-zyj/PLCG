#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-38;
int zero = 0;
unsigned long long int var_16 = 10216783617180899719ULL;
int var_17 = 1028599674;
long long int var_18 = -7380228403431195465LL;
long long int var_19 = 6435137675186469859LL;
unsigned short var_20 = (unsigned short)24282;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-100;
int var_23 = 1318283644;
_Bool var_24 = (_Bool)1;
int arr_0 [12] ;
signed char arr_1 [12] ;
long long int arr_2 [12] [12] ;
_Bool arr_6 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 692880690;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -5059798536283058711LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-66;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
