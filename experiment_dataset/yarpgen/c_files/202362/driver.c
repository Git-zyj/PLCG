#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25117;
int var_6 = -250627466;
unsigned short var_9 = (unsigned short)64614;
int zero = 0;
short var_10 = (short)-13765;
short var_11 = (short)-8923;
long long int var_12 = -2663298175834587268LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
