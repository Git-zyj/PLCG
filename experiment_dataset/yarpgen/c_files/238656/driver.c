#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52573;
short var_10 = (short)19439;
unsigned long long int var_13 = 1430690208717789826ULL;
int zero = 0;
unsigned long long int var_14 = 3027549400440735540ULL;
int var_15 = 719538634;
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
