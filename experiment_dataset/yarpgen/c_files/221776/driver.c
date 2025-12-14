#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2178072971563469139ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)59130;
int zero = 0;
long long int var_15 = 7805527734250568573LL;
signed char var_16 = (signed char)-65;
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
