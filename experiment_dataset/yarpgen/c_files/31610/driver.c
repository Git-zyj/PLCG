#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6974012349805507432LL;
unsigned short var_5 = (unsigned short)7062;
unsigned char var_10 = (unsigned char)143;
short var_16 = (short)788;
int zero = 0;
unsigned long long int var_20 = 6277252901086422332ULL;
int var_21 = -1901211063;
unsigned short var_22 = (unsigned short)64030;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
