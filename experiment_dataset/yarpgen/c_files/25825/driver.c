#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8829175894595767557LL;
unsigned int var_5 = 3421968418U;
unsigned int var_6 = 2721953426U;
int zero = 0;
signed char var_10 = (signed char)116;
signed char var_11 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
