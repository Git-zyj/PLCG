#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned short var_5 = (unsigned short)36246;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)5;
unsigned int var_13 = 3993449858U;
long long int var_14 = -7603373093146357466LL;
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
