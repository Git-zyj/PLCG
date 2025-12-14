#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2830646328U;
unsigned int var_7 = 1871570020U;
unsigned short var_8 = (unsigned short)32740;
int zero = 0;
unsigned short var_14 = (unsigned short)31321;
unsigned short var_15 = (unsigned short)17536;
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
