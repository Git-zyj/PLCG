#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14591593031165218741ULL;
unsigned int var_8 = 1403215272U;
unsigned short var_9 = (unsigned short)29717;
unsigned long long int var_10 = 4498742042246186323ULL;
short var_13 = (short)19218;
unsigned short var_14 = (unsigned short)2272;
int zero = 0;
unsigned short var_17 = (unsigned short)59121;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1626427144U;
int arr_0 [13] ;
int arr_1 [13] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1512631479;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -268924165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -4600603639127754080LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
