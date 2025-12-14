#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 249344808611714126LL;
unsigned short var_7 = (unsigned short)23531;
int zero = 0;
unsigned short var_10 = (unsigned short)22510;
long long int var_11 = 6492136452248993871LL;
long long int var_12 = -4740860097213668713LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
