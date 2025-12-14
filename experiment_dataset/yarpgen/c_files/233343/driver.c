#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1946235173U;
unsigned char var_7 = (unsigned char)229;
unsigned short var_11 = (unsigned short)4384;
int zero = 0;
int var_20 = -1931385434;
unsigned int var_21 = 6426229U;
unsigned int var_22 = 2944210250U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
