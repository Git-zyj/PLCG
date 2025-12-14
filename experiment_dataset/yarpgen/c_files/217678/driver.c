#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2443600129U;
short var_2 = (short)987;
unsigned short var_4 = (unsigned short)48476;
signed char var_5 = (signed char)42;
int zero = 0;
unsigned short var_12 = (unsigned short)17965;
long long int var_13 = 500935244225096430LL;
long long int var_14 = 4747441831781229272LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
