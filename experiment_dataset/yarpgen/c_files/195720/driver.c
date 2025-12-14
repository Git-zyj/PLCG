#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22461;
unsigned char var_9 = (unsigned char)143;
unsigned char var_14 = (unsigned char)37;
int var_16 = -937489451;
int zero = 0;
short var_17 = (short)-19384;
int var_18 = 2034826303;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
