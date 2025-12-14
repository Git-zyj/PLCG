#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1797684320;
int var_4 = 1271756587;
signed char var_7 = (signed char)81;
short var_8 = (short)-31314;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
long long int var_13 = -8002508755929589883LL;
unsigned long long int var_14 = 6007655502191103154ULL;
unsigned int var_15 = 2169313921U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
