#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -854068424;
unsigned long long int var_3 = 11734772653735498609ULL;
unsigned int var_6 = 3334963268U;
unsigned int var_10 = 1465410984U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)2658;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4050377631U;
int var_17 = 989828576;
unsigned int var_18 = 3789023595U;
short arr_1 [14] ;
unsigned int arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-1221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3765334406U : 1133621937U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
