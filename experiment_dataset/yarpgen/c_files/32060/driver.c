#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -977439826;
short var_9 = (short)-32193;
long long int var_11 = 6347804917135117120LL;
int zero = 0;
short var_13 = (short)3397;
long long int var_14 = 385989227590350648LL;
unsigned char var_15 = (unsigned char)4;
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
