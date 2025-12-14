#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9003104606227730981ULL;
unsigned char var_12 = (unsigned char)102;
unsigned int var_13 = 2913831519U;
int zero = 0;
signed char var_17 = (signed char)94;
unsigned int var_18 = 3423649825U;
void init() {
}

void checksum() {
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
