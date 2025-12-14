#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
long long int var_16 = -8524896241356058734LL;
int zero = 0;
unsigned long long int var_18 = 9229667320199881379ULL;
long long int var_19 = -5901706130726055257LL;
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
