#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2198839222U;
short var_3 = (short)-21777;
unsigned int var_8 = 2340688555U;
unsigned short var_11 = (unsigned short)16670;
int zero = 0;
unsigned char var_13 = (unsigned char)238;
long long int var_14 = -8191734116679084547LL;
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
