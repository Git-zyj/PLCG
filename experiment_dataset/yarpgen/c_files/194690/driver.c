#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2924332784U;
long long int var_11 = 4670453813313645352LL;
unsigned char var_15 = (unsigned char)226;
unsigned short var_18 = (unsigned short)28902;
int zero = 0;
short var_19 = (short)8751;
unsigned char var_20 = (unsigned char)191;
long long int var_21 = -1170930389028900302LL;
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
