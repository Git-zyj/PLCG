#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 103904859U;
unsigned long long int var_6 = 6802939431796317470ULL;
unsigned long long int var_8 = 14492274525092246001ULL;
int zero = 0;
signed char var_10 = (signed char)92;
unsigned char var_11 = (unsigned char)71;
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
