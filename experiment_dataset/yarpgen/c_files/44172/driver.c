#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5346;
unsigned long long int var_5 = 12716319817026293711ULL;
unsigned int var_10 = 277465729U;
int zero = 0;
unsigned int var_17 = 2139084841U;
long long int var_18 = 121084620068393031LL;
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
