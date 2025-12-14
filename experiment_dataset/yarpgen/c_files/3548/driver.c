#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 624833533812313402LL;
unsigned int var_4 = 1472570436U;
long long int var_8 = -5179632214848896893LL;
unsigned long long int var_10 = 8158555175421991254ULL;
int zero = 0;
int var_13 = 953192754;
int var_14 = -416479257;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
