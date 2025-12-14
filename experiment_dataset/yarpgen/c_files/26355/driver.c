#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29017;
long long int var_6 = 1241228287210107148LL;
unsigned int var_7 = 450784092U;
long long int var_9 = -2531475958147367457LL;
int zero = 0;
unsigned int var_14 = 1858872625U;
signed char var_15 = (signed char)-119;
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
