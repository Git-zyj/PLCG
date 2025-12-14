#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)49;
int var_9 = -1233497877;
unsigned long long int var_13 = 11748559851592851271ULL;
int zero = 0;
long long int var_14 = 5217780669402607417LL;
unsigned long long int var_15 = 13058926931239046208ULL;
unsigned long long int var_16 = 8559722172499954357ULL;
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
