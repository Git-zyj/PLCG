#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2769545023087630040ULL;
long long int var_3 = 388366092407258997LL;
short var_12 = (short)9295;
int zero = 0;
short var_13 = (short)16198;
unsigned int var_14 = 1525006155U;
signed char var_15 = (signed char)2;
short var_16 = (short)2834;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
