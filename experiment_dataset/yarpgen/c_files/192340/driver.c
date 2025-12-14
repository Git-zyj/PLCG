#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)235;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)255;
unsigned int var_7 = 1712993764U;
unsigned int var_8 = 1897314378U;
signed char var_9 = (signed char)55;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
int var_13 = 1266237825;
unsigned int var_14 = 2698288054U;
void init() {
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
