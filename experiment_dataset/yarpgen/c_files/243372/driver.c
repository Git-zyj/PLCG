#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 481025444U;
signed char var_10 = (signed char)118;
unsigned char var_13 = (unsigned char)68;
int zero = 0;
long long int var_16 = -8676247674502508496LL;
short var_17 = (short)-4730;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
