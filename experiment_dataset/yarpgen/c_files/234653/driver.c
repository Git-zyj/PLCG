#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1661353258U;
unsigned long long int var_3 = 17671401792695706152ULL;
unsigned long long int var_9 = 9122665860698128005ULL;
long long int var_11 = -2173300640522639755LL;
unsigned int var_12 = 2131813182U;
unsigned int var_15 = 3207140805U;
short var_19 = (short)-21394;
int zero = 0;
long long int var_20 = 3683620792481248590LL;
short var_21 = (short)2500;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1199609365U;
long long int var_24 = -8073901473146976071LL;
unsigned int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2447254931U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
