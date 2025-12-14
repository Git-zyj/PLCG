#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)7;
unsigned long long int var_11 = 17698654120661279136ULL;
signed char var_14 = (signed char)-79;
int zero = 0;
unsigned int var_16 = 16654515U;
long long int var_17 = -3273128043199260425LL;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
