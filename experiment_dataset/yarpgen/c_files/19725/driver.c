#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12320868333966279691ULL;
long long int var_8 = 8133517433041791996LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_15 = 837932096793076176LL;
long long int var_16 = -130876032796729137LL;
void init() {
}

void checksum() {
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
