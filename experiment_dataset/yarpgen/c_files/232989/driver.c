#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2814767117U;
unsigned int var_7 = 2289662364U;
unsigned int var_8 = 1370930581U;
unsigned int var_9 = 1046721619U;
unsigned int var_14 = 1372916868U;
unsigned int var_18 = 969380701U;
int zero = 0;
unsigned int var_19 = 3976224601U;
unsigned int var_20 = 3906001637U;
unsigned int var_21 = 3627214517U;
unsigned int var_22 = 535189185U;
unsigned int var_23 = 3048425722U;
unsigned int arr_0 [24] ;
unsigned int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2290097326U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3462340U : 3822446657U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
