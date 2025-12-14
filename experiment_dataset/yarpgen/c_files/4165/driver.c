#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 547695472;
unsigned long long int var_4 = 8862288909392232629ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)90;
int var_11 = -766467446;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
