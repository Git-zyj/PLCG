#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1012006896875073937ULL;
int var_1 = 916297951;
unsigned int var_2 = 3521307717U;
int var_3 = 401569581;
int zero = 0;
int var_11 = -677324055;
int var_12 = -1063597387;
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
