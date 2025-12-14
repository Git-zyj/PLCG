#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-100;
unsigned long long int var_14 = 9733533303106279094ULL;
int zero = 0;
long long int var_16 = -395671795908433457LL;
unsigned char var_17 = (unsigned char)77;
unsigned int var_18 = 3725116507U;
unsigned long long int var_19 = 8758082543648542045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
