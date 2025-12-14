#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5359700653270735726ULL;
int var_11 = -863884650;
unsigned int var_13 = 867816218U;
int zero = 0;
long long int var_15 = -1928936013149158542LL;
unsigned short var_16 = (unsigned short)64160;
int var_17 = 559139595;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
