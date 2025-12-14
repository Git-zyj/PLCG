#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15948751326442872679ULL;
int var_7 = -566217218;
signed char var_8 = (signed char)68;
unsigned long long int var_10 = 10603265355259622474ULL;
unsigned short var_12 = (unsigned short)44708;
int var_13 = 251051938;
int zero = 0;
unsigned long long int var_14 = 15098423296065810917ULL;
long long int var_15 = -8812696351832065968LL;
void init() {
}

void checksum() {
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
