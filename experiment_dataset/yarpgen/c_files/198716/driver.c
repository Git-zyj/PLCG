#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 870584862U;
unsigned int var_1 = 2019729818U;
unsigned int var_2 = 3373377814U;
unsigned int var_3 = 690709706U;
unsigned long long int var_4 = 5167602502410294120ULL;
unsigned char var_5 = (unsigned char)100;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
