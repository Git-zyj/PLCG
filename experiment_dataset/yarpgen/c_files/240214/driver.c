#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1989;
unsigned char var_7 = (unsigned char)122;
long long int var_9 = -5316532724799251305LL;
int zero = 0;
long long int var_15 = 1683144880770186818LL;
unsigned char var_16 = (unsigned char)242;
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
