#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 451676623U;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8672365951300567371LL;
unsigned long long int var_16 = 10749307689970454819ULL;
short var_17 = (short)2257;
int zero = 0;
unsigned short var_20 = (unsigned short)40067;
unsigned int var_21 = 1353223245U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
