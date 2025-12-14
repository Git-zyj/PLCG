#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1522170938;
long long int var_3 = 8156140618982858283LL;
unsigned int var_6 = 3469573017U;
unsigned long long int var_8 = 9395409349702673981ULL;
unsigned int var_11 = 192990512U;
short var_13 = (short)-4751;
int zero = 0;
short var_14 = (short)-2017;
unsigned int var_15 = 401575675U;
long long int var_16 = 6924061692061243415LL;
void init() {
}

void checksum() {
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
