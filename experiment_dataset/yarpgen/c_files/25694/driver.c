#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 604576336U;
unsigned long long int var_5 = 16839709581250768655ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2077668872U;
_Bool var_21 = (_Bool)0;
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
