#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-82;
signed char var_13 = (signed char)100;
unsigned short var_15 = (unsigned short)30116;
int zero = 0;
unsigned long long int var_18 = 9819048803465472968ULL;
signed char var_19 = (signed char)-41;
unsigned long long int var_20 = 87155728683282214ULL;
short var_21 = (short)17053;
_Bool arr_0 [12] ;
long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 6904032095455228222LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
