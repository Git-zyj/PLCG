#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 285457939478058798LL;
unsigned long long int var_7 = 15866947128159824464ULL;
int var_8 = -291863960;
unsigned int var_13 = 2765199675U;
unsigned int var_14 = 3424532961U;
int zero = 0;
unsigned long long int var_16 = 4353248984366012927ULL;
unsigned int var_17 = 2621726079U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
