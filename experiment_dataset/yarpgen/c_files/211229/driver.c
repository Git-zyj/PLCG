#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3709768858U;
signed char var_4 = (signed char)122;
unsigned int var_10 = 1440512901U;
unsigned short var_14 = (unsigned short)16386;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15972879753073172582ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)43522;
unsigned long long int var_19 = 15766146760372899476ULL;
unsigned short var_20 = (unsigned short)6905;
unsigned short var_21 = (unsigned short)64988;
short arr_0 [11] ;
long long int arr_1 [11] ;
unsigned short arr_3 [11] [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-27172;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 6435425866038125018LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)48857;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-43;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
