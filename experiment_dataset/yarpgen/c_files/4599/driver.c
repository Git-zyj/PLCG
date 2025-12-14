#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 5711042183509199648ULL;
unsigned long long int var_6 = 2299594007008707931ULL;
int zero = 0;
unsigned long long int var_19 = 13604190203152503898ULL;
short var_20 = (short)-30626;
unsigned int var_21 = 2325104548U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
