#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
int var_3 = 115473205;
unsigned int var_5 = 1250071061U;
long long int var_7 = -1491735507872617377LL;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
int var_11 = 1972113898;
short var_12 = (short)31942;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
