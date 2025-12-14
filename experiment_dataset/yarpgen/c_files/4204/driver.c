#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned int var_2 = 1264605879U;
unsigned char var_6 = (unsigned char)234;
unsigned short var_7 = (unsigned short)20874;
int var_13 = -268395871;
int zero = 0;
signed char var_14 = (signed char)38;
long long int var_15 = 3325868047342626028LL;
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
