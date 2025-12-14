#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2098296015552349010ULL;
unsigned char var_2 = (unsigned char)200;
long long int var_4 = 4555285648330652518LL;
short var_5 = (short)-30138;
long long int var_8 = -7412291276943789151LL;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
signed char var_11 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
