#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12647368236916013639ULL;
int var_9 = 83972656;
unsigned long long int var_10 = 7253286509548917847ULL;
int zero = 0;
unsigned int var_11 = 2260641727U;
unsigned long long int var_12 = 9179776216651529467ULL;
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
