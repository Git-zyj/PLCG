#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 526304675981185789ULL;
unsigned short var_7 = (unsigned short)14035;
signed char var_10 = (signed char)92;
int zero = 0;
unsigned int var_16 = 3374164270U;
short var_17 = (short)-1894;
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
