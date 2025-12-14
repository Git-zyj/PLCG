#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 3392763628056986335ULL;
int var_11 = -62656601;
unsigned char var_17 = (unsigned char)56;
int zero = 0;
short var_19 = (short)13243;
unsigned short var_20 = (unsigned short)61215;
int var_21 = 477462285;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
