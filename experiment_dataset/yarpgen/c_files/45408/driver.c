#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6349119230970503886LL;
unsigned int var_11 = 2389996589U;
long long int var_15 = -1950234708659891082LL;
int zero = 0;
short var_19 = (short)-31547;
unsigned long long int var_20 = 4253564548998976175ULL;
void init() {
}

void checksum() {
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
