#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59920;
unsigned long long int var_11 = 17858545978572349583ULL;
signed char var_12 = (signed char)23;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_16 = (short)28586;
unsigned long long int var_17 = 10059705731377792278ULL;
unsigned long long int var_18 = 2409684458021071625ULL;
long long int var_19 = 2496906194999143389LL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [13] ;
int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
short arr_3 [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 14011433712200571071ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1477627805;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 9539909796912373933ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)14772;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)30778;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
