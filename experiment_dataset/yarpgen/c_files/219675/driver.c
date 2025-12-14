#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2995636406997590331ULL;
unsigned short var_5 = (unsigned short)25872;
long long int var_8 = 4737605128208654616LL;
int zero = 0;
unsigned char var_14 = (unsigned char)136;
unsigned char var_15 = (unsigned char)22;
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
