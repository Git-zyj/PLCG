#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2080662715125930597LL;
int var_6 = 1581917417;
short var_11 = (short)-29966;
unsigned short var_12 = (unsigned short)29669;
int zero = 0;
unsigned char var_16 = (unsigned char)91;
int var_17 = 663910596;
int var_18 = -1818754132;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
