#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1869426077200951185ULL;
int var_2 = 1567165211;
unsigned short var_5 = (unsigned short)3353;
unsigned char var_13 = (unsigned char)193;
int zero = 0;
short var_14 = (short)-25956;
long long int var_15 = -6795047959063517424LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
