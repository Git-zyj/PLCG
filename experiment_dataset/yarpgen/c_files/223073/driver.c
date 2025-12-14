#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1259211627U;
long long int var_12 = 1697647767025393117LL;
signed char var_13 = (signed char)86;
int zero = 0;
long long int var_20 = -454832717878494208LL;
unsigned char var_21 = (unsigned char)150;
short var_22 = (short)-23282;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
