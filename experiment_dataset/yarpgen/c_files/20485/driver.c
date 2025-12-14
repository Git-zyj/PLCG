#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1797282980;
unsigned int var_2 = 3098971037U;
unsigned short var_9 = (unsigned short)59402;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2793394395U;
unsigned short var_17 = (unsigned short)9730;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
