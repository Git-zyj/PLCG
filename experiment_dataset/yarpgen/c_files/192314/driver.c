#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3890783914853685007ULL;
unsigned long long int var_8 = 12443540209369354802ULL;
int zero = 0;
unsigned long long int var_12 = 6481322237445820417ULL;
unsigned long long int var_13 = 14635355945358943077ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
