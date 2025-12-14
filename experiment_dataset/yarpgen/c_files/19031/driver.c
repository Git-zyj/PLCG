#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 497185145986711354LL;
short var_1 = (short)-21812;
long long int var_3 = 4624574186400428898LL;
long long int var_6 = -1680511637610237493LL;
int zero = 0;
unsigned char var_14 = (unsigned char)137;
int var_15 = 1415034838;
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
