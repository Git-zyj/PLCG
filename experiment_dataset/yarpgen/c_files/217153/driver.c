#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5884812529504014267LL;
int var_7 = -685114786;
short var_10 = (short)-13498;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
long long int var_20 = 8920311001211562455LL;
short var_21 = (short)27534;
signed char var_22 = (signed char)79;
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
