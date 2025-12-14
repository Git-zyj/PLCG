#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9101223352721672480ULL;
long long int var_12 = 4340579729109558371LL;
int zero = 0;
unsigned int var_16 = 590398778U;
unsigned char var_17 = (unsigned char)22;
unsigned long long int var_18 = 6759240675646527256ULL;
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
