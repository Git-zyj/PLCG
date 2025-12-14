#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned long long int var_1 = 6214910932674715698ULL;
signed char var_6 = (signed char)-33;
int zero = 0;
long long int var_11 = -3733379334133183242LL;
signed char var_12 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
