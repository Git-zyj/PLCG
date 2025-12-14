#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 952309860U;
short var_9 = (short)-18020;
signed char var_13 = (signed char)-108;
int zero = 0;
long long int var_15 = -2748295584618533803LL;
unsigned char var_16 = (unsigned char)216;
void init() {
}

void checksum() {
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
