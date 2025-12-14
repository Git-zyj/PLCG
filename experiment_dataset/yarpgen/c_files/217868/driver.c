#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3882029644U;
long long int var_15 = 6159370389098386863LL;
long long int var_16 = 914684979930900376LL;
int zero = 0;
int var_17 = 1771098581;
int var_18 = 1950549531;
long long int var_19 = 2278475681011921622LL;
long long int var_20 = -3514947565664545900LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
