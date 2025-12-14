#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9366420322783904853ULL;
signed char var_2 = (signed char)13;
unsigned char var_5 = (unsigned char)218;
short var_6 = (short)-15251;
int zero = 0;
int var_15 = 1235122405;
unsigned short var_16 = (unsigned short)28090;
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
