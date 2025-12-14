#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59212;
unsigned int var_1 = 2824534682U;
unsigned long long int var_4 = 9000540064513060367ULL;
unsigned int var_8 = 1687091022U;
int zero = 0;
signed char var_10 = (signed char)2;
unsigned short var_11 = (unsigned short)51011;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 983045247U;
_Bool arr_0 [16] ;
unsigned short arr_4 [16] ;
unsigned long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)62022;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 4722480838921616378ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
