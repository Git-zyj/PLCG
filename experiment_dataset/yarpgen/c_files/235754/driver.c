#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 997993446;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3733294132U;
long long int var_11 = 3838609939178874337LL;
unsigned long long int var_12 = 4064491360155254987ULL;
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
