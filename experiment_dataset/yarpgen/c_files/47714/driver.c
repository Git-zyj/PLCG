#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6718379795995853112ULL;
unsigned long long int var_6 = 5654227725848872747ULL;
unsigned long long int var_8 = 12409751886422874803ULL;
short var_9 = (short)21117;
long long int var_10 = -8582653911229822635LL;
int zero = 0;
unsigned int var_11 = 484746554U;
long long int var_12 = -7262516728385553749LL;
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
