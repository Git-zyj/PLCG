#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1770737214U;
unsigned short var_4 = (unsigned short)35229;
unsigned int var_6 = 1760747181U;
int zero = 0;
signed char var_14 = (signed char)59;
unsigned char var_15 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
