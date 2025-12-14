#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27712;
unsigned int var_4 = 993210765U;
unsigned int var_10 = 1000613191U;
unsigned short var_12 = (unsigned short)26210;
int zero = 0;
int var_20 = -1224634638;
short var_21 = (short)-25203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
