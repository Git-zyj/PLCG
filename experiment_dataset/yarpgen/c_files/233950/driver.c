#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23668;
short var_2 = (short)13222;
short var_9 = (short)2249;
unsigned short var_10 = (unsigned short)26157;
int zero = 0;
unsigned long long int var_13 = 12773038019005712581ULL;
unsigned int var_14 = 2173081163U;
long long int var_15 = 1345522235727890558LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
