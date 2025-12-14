#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5827;
short var_1 = (short)-22255;
unsigned int var_9 = 1429438173U;
int zero = 0;
long long int var_12 = -1589684209036276096LL;
int var_13 = 1398014941;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
