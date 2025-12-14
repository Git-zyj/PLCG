#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2012259580460252816LL;
unsigned int var_8 = 629160819U;
unsigned short var_9 = (unsigned short)61793;
unsigned int var_10 = 493461251U;
int zero = 0;
unsigned short var_13 = (unsigned short)2908;
short var_14 = (short)-24095;
void init() {
}

void checksum() {
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
