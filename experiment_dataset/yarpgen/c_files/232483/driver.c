#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)39;
unsigned char var_2 = (unsigned char)218;
_Bool var_4 = (_Bool)1;
int var_7 = 2020242593;
int zero = 0;
unsigned long long int var_15 = 4001323365442480492ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 1763292765;
int var_18 = 740449193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
