#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)179;
int var_13 = 2006120895;
unsigned int var_14 = 1217833054U;
signed char var_15 = (signed char)79;
unsigned char var_18 = (unsigned char)191;
int zero = 0;
unsigned int var_20 = 1897418501U;
unsigned long long int var_21 = 9047372273340472970ULL;
int var_22 = -769106032;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-4912;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
