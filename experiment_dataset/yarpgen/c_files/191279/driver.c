#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 7551616121537804090LL;
signed char var_15 = (signed char)69;
int zero = 0;
unsigned long long int var_20 = 7767850547379809722ULL;
unsigned int var_21 = 3234310316U;
unsigned int var_22 = 3878165714U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
