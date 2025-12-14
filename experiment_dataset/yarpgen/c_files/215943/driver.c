#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1382450545;
unsigned short var_7 = (unsigned short)13295;
long long int var_12 = -2013127436516641692LL;
int zero = 0;
unsigned long long int var_15 = 15602982350389561644ULL;
int var_16 = 882064967;
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
