#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)185;
unsigned int var_8 = 2386095767U;
long long int var_10 = 7695388433226683257LL;
short var_11 = (short)12042;
int zero = 0;
short var_14 = (short)-18957;
long long int var_15 = -6529369257147081808LL;
short var_16 = (short)-14516;
void init() {
}

void checksum() {
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
