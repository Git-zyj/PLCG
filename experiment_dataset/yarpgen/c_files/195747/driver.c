#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2069706509U;
unsigned int var_7 = 574618356U;
long long int var_8 = -113185649157562298LL;
int zero = 0;
unsigned long long int var_12 = 5309572841284697986ULL;
unsigned int var_13 = 98894189U;
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
