#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1695177497252409262ULL;
signed char var_14 = (signed char)-25;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
long long int var_16 = -4831665957165730776LL;
unsigned short var_17 = (unsigned short)5235;
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
