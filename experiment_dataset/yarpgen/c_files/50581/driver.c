#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11892522154698802547ULL;
signed char var_4 = (signed char)30;
_Bool var_7 = (_Bool)0;
int var_9 = -1014234670;
int var_10 = -1689353406;
unsigned int var_11 = 1835082080U;
int zero = 0;
unsigned int var_12 = 1094783736U;
int var_13 = -1943428681;
unsigned int var_14 = 2971338035U;
unsigned short var_15 = (unsigned short)4140;
unsigned int var_16 = 83210978U;
unsigned int var_17 = 712167071U;
int var_18 = -1655778693;
unsigned int arr_0 [12] ;
long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2946507730U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 127564548380221802LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
