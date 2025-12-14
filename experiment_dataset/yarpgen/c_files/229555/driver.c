#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 416008708;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)42541;
short var_5 = (short)-9919;
int zero = 0;
long long int var_10 = -1277050925210507272LL;
unsigned long long int var_11 = 6685316157943468394ULL;
_Bool var_12 = (_Bool)0;
unsigned int arr_0 [20] ;
unsigned int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1508107992U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4171498387U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
