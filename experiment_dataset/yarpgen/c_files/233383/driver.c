#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)38;
unsigned long long int var_13 = 18095852988569214264ULL;
int var_15 = 298063894;
int zero = 0;
long long int var_17 = 4729755030862583132LL;
unsigned long long int var_18 = 8741412513799603954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
