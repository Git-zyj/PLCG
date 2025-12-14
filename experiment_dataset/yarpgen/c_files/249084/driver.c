#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15922;
unsigned long long int var_9 = 17209275882591723114ULL;
int var_14 = -884145251;
unsigned short var_16 = (unsigned short)39004;
int zero = 0;
unsigned int var_17 = 444733487U;
unsigned int var_18 = 1118060001U;
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
