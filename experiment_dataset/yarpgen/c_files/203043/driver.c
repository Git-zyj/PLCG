#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7577039933581547014LL;
unsigned int var_7 = 1390504611U;
int zero = 0;
unsigned char var_13 = (unsigned char)152;
unsigned char var_14 = (unsigned char)166;
long long int var_15 = 4255088201555866249LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
