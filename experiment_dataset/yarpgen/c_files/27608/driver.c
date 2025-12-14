#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1714840897U;
int var_1 = -1849496914;
long long int var_2 = -5091543854307908038LL;
short var_6 = (short)1044;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
unsigned long long int var_14 = 11863436732945580010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
