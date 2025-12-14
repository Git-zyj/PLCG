#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)70;
unsigned int var_9 = 3167035955U;
int var_10 = -331154506;
unsigned int var_13 = 1561426640U;
unsigned char var_14 = (unsigned char)190;
int zero = 0;
signed char var_16 = (signed char)-30;
signed char var_17 = (signed char)101;
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
