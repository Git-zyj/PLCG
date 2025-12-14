#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 385735319;
long long int var_3 = 8828114754071601252LL;
unsigned char var_15 = (unsigned char)231;
int zero = 0;
unsigned long long int var_18 = 12204801216905835078ULL;
long long int var_19 = -4703762671321867969LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
