#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6210971800061011605ULL;
long long int var_6 = 506095303367960131LL;
int zero = 0;
short var_14 = (short)-1916;
short var_15 = (short)-15345;
unsigned short var_16 = (unsigned short)46538;
int var_17 = -852343146;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
