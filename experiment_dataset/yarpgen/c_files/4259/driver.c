#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -725346765;
unsigned long long int var_10 = 371069899092117162ULL;
int zero = 0;
unsigned int var_12 = 1466415589U;
long long int var_13 = -1812736166635630389LL;
unsigned long long int var_14 = 10957670631222584686ULL;
unsigned long long int var_15 = 2116071516507309479ULL;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
