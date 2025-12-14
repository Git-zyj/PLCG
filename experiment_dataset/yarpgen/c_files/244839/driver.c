#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61483;
long long int var_9 = 3556931813753411857LL;
long long int var_10 = -6411535247029751950LL;
int zero = 0;
unsigned short var_12 = (unsigned short)46475;
signed char var_13 = (signed char)(-127 - 1);
unsigned short var_14 = (unsigned short)39767;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
