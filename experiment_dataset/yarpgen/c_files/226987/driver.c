#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4005374423U;
unsigned int var_1 = 3025992315U;
unsigned int var_3 = 3811540640U;
unsigned int var_11 = 3148301521U;
int zero = 0;
unsigned int var_12 = 2151877287U;
unsigned int var_13 = 1222238808U;
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
