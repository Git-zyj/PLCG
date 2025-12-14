#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 168652304639338631LL;
unsigned int var_9 = 534372737U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 12652121801339081545ULL;
_Bool var_15 = (_Bool)1;
int var_16 = -375124124;
short var_17 = (short)20900;
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
