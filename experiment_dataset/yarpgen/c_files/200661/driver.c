#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 671297558U;
unsigned long long int var_11 = 12262255527962261841ULL;
unsigned int var_18 = 1638942399U;
int zero = 0;
signed char var_20 = (signed char)38;
signed char var_21 = (signed char)72;
int var_22 = -2141524665;
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
