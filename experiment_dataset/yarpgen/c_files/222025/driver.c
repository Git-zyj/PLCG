#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1047916958429418932LL;
unsigned char var_8 = (unsigned char)181;
unsigned short var_11 = (unsigned short)34190;
unsigned long long int var_12 = 12102673413383920069ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)28226;
unsigned short var_14 = (unsigned short)47278;
int var_15 = -1465037431;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
