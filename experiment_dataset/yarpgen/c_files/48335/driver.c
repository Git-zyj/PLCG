#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3393238307U;
unsigned int var_6 = 3951202515U;
long long int var_8 = 4056408899788620231LL;
int zero = 0;
long long int var_10 = 6618851910431569356LL;
unsigned int var_11 = 1976670720U;
int var_12 = -1877661177;
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
