#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 125402753295367916ULL;
short var_3 = (short)8685;
signed char var_6 = (signed char)54;
int zero = 0;
short var_10 = (short)-15060;
signed char var_11 = (signed char)83;
unsigned char var_12 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
