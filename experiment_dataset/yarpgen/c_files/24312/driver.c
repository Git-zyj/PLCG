#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5943652354333337663ULL;
long long int var_13 = 4340564863872957509LL;
int zero = 0;
unsigned long long int var_14 = 14716256910943574271ULL;
long long int var_15 = 4953200467924412883LL;
long long int var_16 = 1228751046178876808LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
