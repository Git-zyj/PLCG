#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3106704302U;
unsigned char var_2 = (unsigned char)47;
unsigned long long int var_9 = 5948733303580611388ULL;
int zero = 0;
unsigned int var_20 = 113790222U;
int var_21 = 1937109400;
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
