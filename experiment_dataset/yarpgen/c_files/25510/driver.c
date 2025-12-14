#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2108584071U;
unsigned int var_1 = 435690572U;
short var_2 = (short)24195;
int zero = 0;
unsigned long long int var_15 = 4232608728356899538ULL;
short var_16 = (short)27149;
long long int var_17 = -2019668533703274343LL;
void init() {
}

void checksum() {
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
