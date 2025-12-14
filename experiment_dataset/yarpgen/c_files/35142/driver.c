#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1990300512;
unsigned char var_6 = (unsigned char)154;
signed char var_7 = (signed char)-14;
unsigned int var_12 = 1749617389U;
long long int var_15 = 1023130040244813442LL;
unsigned int var_18 = 1960637474U;
unsigned int var_19 = 3136952608U;
int zero = 0;
int var_20 = 20361825;
long long int var_21 = -3664627199639409437LL;
signed char var_22 = (signed char)117;
unsigned long long int var_23 = 8580346991714558839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
