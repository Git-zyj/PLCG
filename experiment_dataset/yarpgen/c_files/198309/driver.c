#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1656092598;
unsigned int var_8 = 3846409708U;
unsigned long long int var_11 = 3225755561103451927ULL;
int zero = 0;
int var_12 = -905185050;
unsigned long long int var_13 = 13677555887971680722ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
