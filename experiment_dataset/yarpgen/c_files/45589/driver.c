#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 942865599U;
unsigned int var_4 = 532359554U;
unsigned int var_5 = 2638693915U;
unsigned int var_8 = 1482813335U;
unsigned int var_10 = 3387630971U;
unsigned int var_12 = 2452161012U;
unsigned int var_13 = 2211295006U;
unsigned int var_15 = 3596863986U;
unsigned int var_17 = 2475624784U;
int zero = 0;
unsigned int var_18 = 3242401633U;
unsigned int var_19 = 342793857U;
unsigned int var_20 = 3978939450U;
unsigned int var_21 = 3937151539U;
unsigned int var_22 = 3995249949U;
unsigned int var_23 = 3485772105U;
unsigned int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 425840027U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
