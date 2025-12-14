#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1555756077U;
unsigned char var_6 = (unsigned char)185;
int var_11 = -2103940145;
unsigned long long int var_14 = 14859623189919521775ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)29156;
unsigned char var_18 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
