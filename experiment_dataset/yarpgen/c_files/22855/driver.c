#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
long long int var_9 = -5478343052059727736LL;
unsigned int var_12 = 1834612472U;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
int var_19 = -1987615788;
unsigned char var_20 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
