#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2209939908U;
unsigned int var_9 = 3551791458U;
signed char var_10 = (signed char)-30;
unsigned long long int var_11 = 8070589001500116995ULL;
int var_13 = -973649939;
int zero = 0;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = -8175519818181050372LL;
short var_21 = (short)16796;
int var_22 = -2015161408;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
