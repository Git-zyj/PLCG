#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
long long int var_1 = -8981211876486079301LL;
long long int var_6 = 2210391641781561267LL;
int var_8 = 576185076;
int var_11 = -2129438434;
int zero = 0;
int var_13 = -1135771841;
unsigned long long int var_14 = 4098865987148539078ULL;
void init() {
}

void checksum() {
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
