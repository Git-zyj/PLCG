#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20451;
unsigned long long int var_2 = 2787241573141222288ULL;
signed char var_15 = (signed char)119;
int zero = 0;
unsigned char var_16 = (unsigned char)32;
signed char var_17 = (signed char)122;
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
