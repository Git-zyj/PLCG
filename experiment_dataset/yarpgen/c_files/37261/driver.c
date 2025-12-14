#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1543355395;
unsigned long long int var_9 = 1693446980925726845ULL;
unsigned long long int var_11 = 1333724575413639166ULL;
int zero = 0;
long long int var_14 = 3438463606252981531LL;
long long int var_15 = -4490658538051948333LL;
int var_16 = -1412417690;
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
