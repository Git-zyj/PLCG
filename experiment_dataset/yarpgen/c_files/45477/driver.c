#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)135;
long long int var_7 = -4072546309935861693LL;
unsigned char var_8 = (unsigned char)51;
int zero = 0;
unsigned int var_15 = 2399034169U;
int var_16 = 1110828505;
unsigned char var_17 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
