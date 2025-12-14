#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16514167252930276149ULL;
unsigned short var_3 = (unsigned short)51959;
unsigned long long int var_5 = 6611312287007843342ULL;
unsigned short var_8 = (unsigned short)30618;
int zero = 0;
long long int var_10 = 7048402175375596843LL;
long long int var_11 = -288372650197785729LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
