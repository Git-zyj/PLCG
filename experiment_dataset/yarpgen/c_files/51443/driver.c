#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 1149240657U;
unsigned int var_15 = 1187628913U;
int zero = 0;
unsigned int var_18 = 459628231U;
unsigned int var_19 = 1770176330U;
unsigned int var_20 = 869409494U;
unsigned int var_21 = 2098053375U;
unsigned int var_22 = 1836547669U;
unsigned int var_23 = 2514354222U;
unsigned int arr_2 [25] ;
unsigned int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3280611231U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 369324232U;
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
