#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3857083388U;
unsigned long long int var_5 = 15865029556569210003ULL;
int zero = 0;
int var_16 = 1445073302;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 519763456207173753ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
