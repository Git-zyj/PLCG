#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1809597737;
unsigned char var_12 = (unsigned char)150;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3086029658U;
unsigned long long int var_16 = 17390422851923889181ULL;
unsigned int var_17 = 99237500U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
