#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4093792357U;
signed char var_9 = (signed char)37;
signed char var_11 = (signed char)108;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
unsigned long long int var_15 = 12707151360805719002ULL;
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
