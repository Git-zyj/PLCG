#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -396784798;
unsigned short var_8 = (unsigned short)19699;
unsigned int var_9 = 2587730729U;
short var_15 = (short)9211;
int zero = 0;
int var_17 = -1522718704;
unsigned char var_18 = (unsigned char)236;
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
