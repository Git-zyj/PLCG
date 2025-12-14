#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2800253910U;
int var_5 = -1194652802;
unsigned long long int var_11 = 97684330616147561ULL;
unsigned short var_13 = (unsigned short)40623;
short var_14 = (short)31675;
int zero = 0;
short var_17 = (short)27693;
short var_18 = (short)-22894;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
