#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)107;
int zero = 0;
signed char var_12 = (signed char)-39;
long long int var_13 = 4059858101400333124LL;
unsigned int var_14 = 2500059335U;
signed char var_15 = (signed char)8;
unsigned int var_16 = 2871305618U;
unsigned int var_17 = 1664711535U;
unsigned char var_18 = (unsigned char)190;
_Bool arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
