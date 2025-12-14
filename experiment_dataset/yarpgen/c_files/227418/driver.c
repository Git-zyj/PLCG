#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14566053094437526565ULL;
int var_2 = -284953055;
unsigned int var_6 = 4186393154U;
unsigned int var_7 = 332723115U;
unsigned char var_11 = (unsigned char)96;
unsigned int var_13 = 1365722951U;
unsigned char var_14 = (unsigned char)107;
int zero = 0;
long long int var_15 = 8889605983796075179LL;
unsigned int var_16 = 219310505U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
