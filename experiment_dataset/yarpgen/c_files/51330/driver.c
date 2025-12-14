#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5674765364890342467ULL;
unsigned long long int var_3 = 10466840526677151488ULL;
unsigned short var_7 = (unsigned short)61473;
unsigned int var_10 = 2509598943U;
unsigned char var_12 = (unsigned char)242;
int zero = 0;
unsigned long long int var_14 = 9506543993511212213ULL;
unsigned char var_15 = (unsigned char)57;
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
