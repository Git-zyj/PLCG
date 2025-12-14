#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)63;
long long int var_9 = 1338201616566643022LL;
int zero = 0;
unsigned int var_13 = 4013916402U;
long long int var_14 = 3149730923661277522LL;
unsigned short var_15 = (unsigned short)21293;
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
