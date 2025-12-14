#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 724781566;
unsigned char var_3 = (unsigned char)109;
unsigned int var_4 = 2461465706U;
long long int var_8 = -269982083115619577LL;
int zero = 0;
signed char var_16 = (signed char)47;
unsigned char var_17 = (unsigned char)49;
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
