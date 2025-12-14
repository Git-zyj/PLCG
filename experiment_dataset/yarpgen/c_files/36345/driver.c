#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1821445395;
long long int var_6 = -8096364681666455734LL;
long long int var_10 = 3208473659233472092LL;
signed char var_11 = (signed char)35;
int zero = 0;
int var_14 = -835595503;
unsigned int var_15 = 3855259075U;
int var_16 = 1722132646;
long long int var_17 = -3150309841551193657LL;
long long int var_18 = -4201249125883736512LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
