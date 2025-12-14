#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9912042565753125997ULL;
int var_3 = 408169261;
unsigned long long int var_6 = 14358108983881991861ULL;
int var_8 = 72923484;
int zero = 0;
int var_11 = -34603695;
unsigned long long int var_12 = 4291488122143010942ULL;
void init() {
}

void checksum() {
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
