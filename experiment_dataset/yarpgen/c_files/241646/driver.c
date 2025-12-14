#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6706420801290511472ULL;
unsigned int var_8 = 1310732095U;
long long int var_12 = -4168417132388382272LL;
unsigned char var_13 = (unsigned char)143;
int zero = 0;
long long int var_15 = 2918766725753707104LL;
unsigned char var_16 = (unsigned char)30;
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
