#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2008886181;
unsigned char var_12 = (unsigned char)233;
signed char var_16 = (signed char)2;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8788458756138202199LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
