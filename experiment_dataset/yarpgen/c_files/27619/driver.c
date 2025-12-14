#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 64920188;
unsigned long long int var_4 = 9844845945556845332ULL;
unsigned int var_5 = 2268344087U;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)52;
int zero = 0;
int var_10 = -1462233859;
unsigned int var_11 = 4011371116U;
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
