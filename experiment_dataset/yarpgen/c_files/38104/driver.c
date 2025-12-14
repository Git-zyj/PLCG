#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17174363912464706141ULL;
unsigned int var_3 = 3616915841U;
unsigned long long int var_7 = 17043017566263996640ULL;
unsigned long long int var_12 = 17283412280429132964ULL;
int zero = 0;
long long int var_16 = 7750962541023714714LL;
_Bool var_17 = (_Bool)0;
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
