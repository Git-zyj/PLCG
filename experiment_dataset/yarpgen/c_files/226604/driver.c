#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8971226142023559831LL;
short var_12 = (short)25271;
int zero = 0;
unsigned long long int var_20 = 4197658520220808115ULL;
unsigned int var_21 = 4282042788U;
unsigned char var_22 = (unsigned char)194;
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
