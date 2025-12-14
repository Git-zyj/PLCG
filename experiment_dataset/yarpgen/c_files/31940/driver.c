#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7245466981405197783LL;
short var_4 = (short)2665;
unsigned long long int var_6 = 4842597876758058711ULL;
int var_7 = 1425628644;
short var_12 = (short)-17804;
int zero = 0;
short var_17 = (short)12495;
unsigned char var_18 = (unsigned char)96;
short var_19 = (short)-10487;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
