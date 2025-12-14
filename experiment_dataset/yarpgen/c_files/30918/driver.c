#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2258875730772440368LL;
int var_5 = -2083494968;
int zero = 0;
long long int var_13 = 3057466556110733171LL;
long long int var_14 = -2843199800200207601LL;
unsigned char var_15 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
