#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)126;
unsigned char var_10 = (unsigned char)189;
unsigned int var_12 = 999402616U;
int zero = 0;
unsigned long long int var_17 = 12831341258407234995ULL;
short var_18 = (short)-29075;
void init() {
}

void checksum() {
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
