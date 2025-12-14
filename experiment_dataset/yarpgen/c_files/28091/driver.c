#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6307018580935531808ULL;
unsigned char var_3 = (unsigned char)94;
unsigned char var_10 = (unsigned char)49;
signed char var_12 = (signed char)108;
int zero = 0;
signed char var_15 = (signed char)91;
short var_16 = (short)-15671;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
