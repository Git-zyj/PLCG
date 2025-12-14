#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2307474828U;
long long int var_5 = 2540461801156407111LL;
short var_8 = (short)-16262;
int var_12 = 2025411372;
int var_13 = -830262341;
int zero = 0;
unsigned long long int var_14 = 16120903529090639592ULL;
short var_15 = (short)21532;
short var_16 = (short)3288;
unsigned long long int var_17 = 3086158212542235029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
