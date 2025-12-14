#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28871;
unsigned int var_6 = 2113736985U;
unsigned int var_12 = 1249284200U;
long long int var_14 = -5871904884572271029LL;
int var_16 = -832140983;
int zero = 0;
unsigned char var_18 = (unsigned char)96;
short var_19 = (short)-9076;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
