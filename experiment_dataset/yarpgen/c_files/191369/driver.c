#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1349045258U;
long long int var_10 = 949945409538085924LL;
unsigned long long int var_11 = 12590651745376970005ULL;
unsigned int var_12 = 2750447992U;
int zero = 0;
unsigned char var_16 = (unsigned char)53;
long long int var_17 = 3353185458738647913LL;
void init() {
}

void checksum() {
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
