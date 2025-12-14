#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17584124451003369927ULL;
signed char var_9 = (signed char)10;
unsigned int var_11 = 3562978382U;
unsigned short var_13 = (unsigned short)56256;
int zero = 0;
unsigned long long int var_15 = 13238091354074520505ULL;
long long int var_16 = -4264763820640597370LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
