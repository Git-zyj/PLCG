#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -8108058810850137115LL;
long long int var_13 = 3294873356993285706LL;
unsigned int var_14 = 2894066414U;
unsigned int var_16 = 2043943578U;
int zero = 0;
unsigned int var_20 = 1786107282U;
unsigned char var_21 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
