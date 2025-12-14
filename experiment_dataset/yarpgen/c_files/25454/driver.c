#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)97;
unsigned long long int var_8 = 14159017841358209440ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_17 = (short)-20403;
unsigned short var_18 = (unsigned short)30524;
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
