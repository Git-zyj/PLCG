#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1332405332;
_Bool var_1 = (_Bool)0;
int var_5 = -1876034694;
unsigned long long int var_8 = 7240039192047005821ULL;
unsigned int var_10 = 1514795873U;
int zero = 0;
unsigned int var_13 = 3103595414U;
unsigned int var_14 = 911257031U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
