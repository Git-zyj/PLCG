#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
signed char var_1 = (signed char)92;
signed char var_7 = (signed char)62;
unsigned short var_8 = (unsigned short)39696;
unsigned char var_10 = (unsigned char)91;
unsigned int var_14 = 346748710U;
int zero = 0;
unsigned short var_15 = (unsigned short)62011;
long long int var_16 = -4096664819082833511LL;
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
