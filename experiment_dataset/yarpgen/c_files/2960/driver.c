#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1620910476;
unsigned long long int var_7 = 12050428329659764441ULL;
unsigned short var_8 = (unsigned short)42920;
long long int var_10 = -6177508312660575181LL;
int zero = 0;
unsigned long long int var_11 = 16358474894301744077ULL;
long long int var_12 = -8553617959315441331LL;
unsigned short var_13 = (unsigned short)53312;
signed char var_14 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
