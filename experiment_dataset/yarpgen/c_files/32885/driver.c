#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)105;
unsigned int var_11 = 386413230U;
long long int var_12 = 2404170255201745794LL;
unsigned short var_14 = (unsigned short)44816;
int zero = 0;
unsigned char var_15 = (unsigned char)25;
unsigned long long int var_16 = 12104877377330002426ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
