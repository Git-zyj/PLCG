#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3958967509584018559LL;
long long int var_4 = 5956570319431178182LL;
long long int var_8 = 2532778062697756538LL;
long long int var_10 = -8089538929898402140LL;
short var_11 = (short)-14965;
int var_13 = -2081355798;
long long int var_18 = -2211279915618452686LL;
int zero = 0;
int var_19 = -98262904;
int var_20 = 1084301607;
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
