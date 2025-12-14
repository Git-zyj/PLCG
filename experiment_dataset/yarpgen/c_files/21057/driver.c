#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30757;
unsigned long long int var_12 = 15030233045076901141ULL;
signed char var_16 = (signed char)107;
int zero = 0;
unsigned short var_17 = (unsigned short)1576;
short var_18 = (short)8448;
void init() {
}

void checksum() {
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
