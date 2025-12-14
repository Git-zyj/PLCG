#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)134;
long long int var_5 = -5449209812270828177LL;
unsigned int var_10 = 3650978587U;
int zero = 0;
unsigned int var_14 = 1439839267U;
unsigned short var_15 = (unsigned short)47995;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
