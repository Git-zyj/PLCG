#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6686201964255881878LL;
_Bool var_6 = (_Bool)1;
short var_9 = (short)568;
int zero = 0;
unsigned long long int var_16 = 18039042106147069811ULL;
unsigned char var_17 = (unsigned char)206;
int var_18 = 1529408378;
unsigned long long int var_19 = 17704005637368683762ULL;
_Bool var_20 = (_Bool)0;
unsigned int arr_3 [19] [19] ;
unsigned long long int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1672543782U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 7749803685924077770ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
