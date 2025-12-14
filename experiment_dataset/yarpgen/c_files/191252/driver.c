#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4389;
unsigned char var_3 = (unsigned char)251;
short var_4 = (short)8338;
short var_6 = (short)11854;
unsigned int var_9 = 2999227606U;
int zero = 0;
unsigned int var_13 = 664351547U;
unsigned long long int var_14 = 4882791443663474495ULL;
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
