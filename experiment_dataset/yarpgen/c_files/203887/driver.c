#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1315211806U;
long long int var_9 = -6107428884735165384LL;
unsigned int var_10 = 3085957657U;
int zero = 0;
long long int var_12 = 3986676279317967896LL;
unsigned int var_13 = 3764581231U;
unsigned long long int var_14 = 16999819380181473676ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
