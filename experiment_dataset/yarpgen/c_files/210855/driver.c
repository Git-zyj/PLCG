#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)69;
unsigned char var_11 = (unsigned char)63;
signed char var_14 = (signed char)-34;
int zero = 0;
unsigned short var_16 = (unsigned short)10896;
long long int var_17 = 4151917841367039874LL;
signed char var_18 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
