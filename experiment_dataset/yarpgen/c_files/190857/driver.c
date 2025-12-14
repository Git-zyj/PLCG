#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 577373547U;
int var_11 = 452109892;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 2346637875745596601ULL;
unsigned short var_15 = (unsigned short)25833;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
