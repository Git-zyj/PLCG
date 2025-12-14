#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
unsigned long long int var_7 = 16842228168342018763ULL;
long long int var_9 = 3530781819885882802LL;
signed char var_10 = (signed char)51;
int zero = 0;
unsigned long long int var_14 = 5679997147359134243ULL;
unsigned short var_15 = (unsigned short)36677;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
