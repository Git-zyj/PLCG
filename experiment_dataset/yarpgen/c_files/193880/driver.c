#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1437496500;
int var_7 = -1787631512;
unsigned long long int var_12 = 5655195220589680606ULL;
unsigned int var_13 = 2336566917U;
long long int var_19 = 517598453919704481LL;
int zero = 0;
unsigned long long int var_20 = 13266050897489963649ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
