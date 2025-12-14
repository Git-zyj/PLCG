#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1842285872;
unsigned long long int var_1 = 11641778151171930393ULL;
short var_3 = (short)19720;
short var_7 = (short)27419;
long long int var_11 = -5292540728035126805LL;
unsigned int var_12 = 2069971643U;
int zero = 0;
long long int var_13 = 1914932826036392902LL;
unsigned short var_14 = (unsigned short)41910;
short var_15 = (short)-6020;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
