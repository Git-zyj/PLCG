#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
_Bool var_5 = (_Bool)1;
int var_7 = -1333462579;
int var_10 = 1793306789;
unsigned char var_15 = (unsigned char)154;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1134134592839794102LL;
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
