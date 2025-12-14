#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-2673;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11467343664048675876ULL;
unsigned long long int var_17 = 7116147269332168746ULL;
signed char var_18 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
