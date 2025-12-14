#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 398723287;
_Bool var_4 = (_Bool)0;
long long int var_8 = -7049231874294318257LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 429922628582549086ULL;
int zero = 0;
long long int var_16 = 5295211634408233372LL;
int var_17 = 988150964;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
