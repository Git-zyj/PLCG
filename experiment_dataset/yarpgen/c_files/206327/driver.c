#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4092475960U;
unsigned int var_2 = 2092254376U;
unsigned short var_3 = (unsigned short)40944;
unsigned short var_8 = (unsigned short)41374;
unsigned char var_9 = (unsigned char)67;
unsigned int var_10 = 1606439730U;
unsigned long long int var_11 = 7733982171194332749ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)46146;
int zero = 0;
unsigned int var_15 = 1632315037U;
unsigned long long int var_16 = 14218448990314103829ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
