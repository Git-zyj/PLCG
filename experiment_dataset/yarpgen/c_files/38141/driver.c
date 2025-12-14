#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4144036276U;
long long int var_14 = -1862118765441053352LL;
int zero = 0;
long long int var_18 = 566141296313345027LL;
unsigned char var_19 = (unsigned char)133;
unsigned char var_20 = (unsigned char)103;
unsigned int var_21 = 2881302251U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
