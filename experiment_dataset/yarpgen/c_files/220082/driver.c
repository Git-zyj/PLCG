#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1469014866;
unsigned int var_5 = 2729866944U;
unsigned short var_6 = (unsigned short)5350;
short var_9 = (short)12883;
unsigned short var_11 = (unsigned short)10796;
int zero = 0;
unsigned int var_12 = 1675221811U;
long long int var_13 = -5854639023428968730LL;
unsigned int var_14 = 4111349769U;
_Bool arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
