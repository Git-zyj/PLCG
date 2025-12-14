#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2880020396U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_7 = 5755296652611630132ULL;
short var_10 = (short)23382;
signed char var_11 = (signed char)-115;
short var_12 = (short)946;
unsigned short var_14 = (unsigned short)28786;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4081439604U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -4768952353174627390LL;
}

void checksum() {
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
