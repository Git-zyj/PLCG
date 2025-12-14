#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8853990290474237974LL;
short var_3 = (short)-17814;
int var_4 = 1091350465;
unsigned short var_5 = (unsigned short)52564;
unsigned int var_7 = 2646005898U;
_Bool var_8 = (_Bool)1;
int var_9 = -276963342;
short var_10 = (short)9443;
signed char var_11 = (signed char)5;
int zero = 0;
unsigned int var_12 = 3312060523U;
short var_13 = (short)3785;
signed char var_14 = (signed char)122;
long long int var_15 = -2589384609454984455LL;
long long int var_16 = -395364524090074323LL;
int var_17 = 1890966822;
unsigned long long int var_18 = 7012159712439968297ULL;
short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-15477;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
