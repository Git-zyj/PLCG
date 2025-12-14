#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8625067856998827035LL;
signed char var_10 = (signed char)126;
signed char var_14 = (signed char)-78;
int zero = 0;
short var_18 = (short)-17646;
unsigned char var_19 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
