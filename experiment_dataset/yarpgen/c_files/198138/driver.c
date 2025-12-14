#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 2061643400;
unsigned int var_9 = 2189937523U;
unsigned short var_12 = (unsigned short)39822;
unsigned short var_14 = (unsigned short)46758;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1651613685U;
unsigned int var_17 = 2191925107U;
unsigned long long int var_18 = 14796074287971678132ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)38874;
unsigned int arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2720415927U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2709713152262426487ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
