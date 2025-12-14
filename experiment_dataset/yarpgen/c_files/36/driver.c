#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
short var_5 = (short)24621;
unsigned long long int var_7 = 6304333761142070329ULL;
long long int var_8 = -6893648865040468007LL;
int var_10 = 227368618;
int zero = 0;
unsigned char var_17 = (unsigned char)87;
int var_18 = 1124571764;
void init() {
}

void checksum() {
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
