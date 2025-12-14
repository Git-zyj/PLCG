#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
unsigned short var_8 = (unsigned short)9275;
unsigned long long int var_12 = 14222646059092812897ULL;
int zero = 0;
long long int var_13 = 1388005159933555927LL;
signed char var_14 = (signed char)43;
long long int var_15 = -2456346883164126944LL;
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
