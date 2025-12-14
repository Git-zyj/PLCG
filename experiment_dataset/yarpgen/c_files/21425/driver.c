#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7305494206490010833LL;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)30078;
int zero = 0;
signed char var_12 = (signed char)53;
signed char var_13 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
