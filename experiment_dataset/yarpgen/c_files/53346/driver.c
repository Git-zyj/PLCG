#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1780220405U;
long long int var_9 = -6919958066396804055LL;
long long int var_15 = -7763152268457647624LL;
unsigned char var_16 = (unsigned char)29;
unsigned short var_17 = (unsigned short)52308;
unsigned short var_18 = (unsigned short)49911;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
short var_21 = (short)-9865;
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
