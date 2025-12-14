#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41894;
int var_12 = 767818831;
unsigned short var_13 = (unsigned short)24839;
int zero = 0;
unsigned int var_14 = 3464287476U;
unsigned short var_15 = (unsigned short)15996;
short var_16 = (short)6487;
long long int var_17 = -3646159108181148111LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
