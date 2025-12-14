#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1067597604U;
int var_10 = 305036408;
unsigned int var_12 = 3143887467U;
unsigned char var_15 = (unsigned char)113;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1058220083;
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
