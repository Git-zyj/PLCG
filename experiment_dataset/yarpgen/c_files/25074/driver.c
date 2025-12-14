#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24380;
unsigned long long int var_2 = 13010813479938235884ULL;
short var_7 = (short)19851;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
unsigned long long int var_13 = 14029876594601085039ULL;
unsigned long long int var_14 = 17597410034357600972ULL;
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
