#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1104893722U;
int var_9 = 1792644495;
unsigned char var_11 = (unsigned char)36;
int var_14 = 1200528724;
int zero = 0;
short var_16 = (short)-29083;
short var_17 = (short)9902;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
