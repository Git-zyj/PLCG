#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
short var_1 = (short)29808;
long long int var_3 = 7272311074989955955LL;
unsigned char var_7 = (unsigned char)79;
unsigned long long int var_13 = 5286314436988061627ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
signed char var_17 = (signed char)-122;
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
