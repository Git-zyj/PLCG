#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6161538684489999260ULL;
int var_5 = -1548019077;
unsigned long long int var_7 = 5842698300280257418ULL;
unsigned int var_11 = 1277988876U;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned long long int var_13 = 12975518172530255624ULL;
unsigned long long int var_14 = 1020577713614986485ULL;
short var_15 = (short)26894;
long long int var_16 = 4792520979950764753LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
