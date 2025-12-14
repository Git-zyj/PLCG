#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 492530429;
int var_9 = -1854980168;
unsigned short var_19 = (unsigned short)25801;
int zero = 0;
signed char var_20 = (signed char)1;
unsigned long long int var_21 = 11355390222551691217ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
