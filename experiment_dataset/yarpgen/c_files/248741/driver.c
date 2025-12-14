#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3571237551U;
unsigned long long int var_4 = 17606984813116921626ULL;
long long int var_6 = -3947364575464187089LL;
int var_8 = 2076393308;
signed char var_9 = (signed char)49;
_Bool var_11 = (_Bool)1;
int var_14 = -2110445323;
unsigned short var_17 = (unsigned short)63691;
int zero = 0;
unsigned int var_19 = 1916375634U;
unsigned int var_20 = 2135967305U;
unsigned long long int var_21 = 4542794759340289319ULL;
unsigned long long int var_22 = 5954509624047365622ULL;
long long int arr_0 [24] ;
unsigned char arr_2 [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -4787931716447374381LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3542964161U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
