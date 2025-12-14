#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21491;
unsigned long long int var_4 = 1692558109809585495ULL;
long long int var_10 = 4542435557069736889LL;
int zero = 0;
short var_16 = (short)-1310;
unsigned char var_17 = (unsigned char)188;
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
