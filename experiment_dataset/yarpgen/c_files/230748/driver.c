#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1469324491U;
int var_10 = 1710498644;
short var_11 = (short)-4474;
int zero = 0;
unsigned long long int var_12 = 10358687520379287889ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-27209;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
