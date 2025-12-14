#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3285539298621869328LL;
unsigned char var_10 = (unsigned char)31;
unsigned short var_15 = (unsigned short)32347;
int zero = 0;
signed char var_16 = (signed char)-36;
unsigned int var_17 = 1435991177U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
