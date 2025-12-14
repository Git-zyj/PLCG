#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16746749720717486787ULL;
unsigned int var_5 = 342582258U;
unsigned int var_16 = 2474949230U;
int zero = 0;
long long int var_20 = -1760798873083840273LL;
unsigned long long int var_21 = 13692542527646730690ULL;
unsigned long long int var_22 = 7580147864477136114ULL;
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
