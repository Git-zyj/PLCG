#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8583674481518359573LL;
signed char var_1 = (signed char)-92;
unsigned int var_3 = 1439928586U;
unsigned char var_7 = (unsigned char)231;
int zero = 0;
unsigned char var_10 = (unsigned char)124;
signed char var_11 = (signed char)-123;
long long int var_12 = 968716829112135741LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
