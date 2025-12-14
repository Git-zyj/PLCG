#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
unsigned short var_2 = (unsigned short)48309;
unsigned char var_5 = (unsigned char)154;
int zero = 0;
long long int var_14 = -3772942372396304263LL;
unsigned short var_15 = (unsigned short)63528;
unsigned short var_16 = (unsigned short)45998;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
