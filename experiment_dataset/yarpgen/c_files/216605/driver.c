#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_8 = 10057753924549896432ULL;
unsigned long long int var_17 = 4403270852445955081ULL;
unsigned long long int var_19 = 12281828970588693570ULL;
int zero = 0;
unsigned int var_20 = 3013000607U;
unsigned long long int var_21 = 11919118497367130008ULL;
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
