#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1928172082;
int var_1 = -1272409477;
int var_3 = -1923288825;
unsigned char var_8 = (unsigned char)253;
short var_9 = (short)-14118;
unsigned char var_12 = (unsigned char)251;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)38;
unsigned char var_17 = (unsigned char)242;
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
