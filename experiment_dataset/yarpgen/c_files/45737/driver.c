#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9033;
unsigned int var_5 = 265966001U;
int var_8 = -95706960;
int zero = 0;
long long int var_15 = -5911618326813374395LL;
long long int var_16 = 5035092292166400030LL;
unsigned int var_17 = 2277087734U;
void init() {
}

void checksum() {
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
