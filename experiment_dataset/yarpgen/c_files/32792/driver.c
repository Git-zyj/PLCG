#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)185;
unsigned char var_11 = (unsigned char)15;
unsigned char var_13 = (unsigned char)2;
int zero = 0;
unsigned long long int var_14 = 12116953468675657188ULL;
long long int var_15 = 3809943160796858123LL;
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
