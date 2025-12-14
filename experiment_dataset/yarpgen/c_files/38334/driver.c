#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5821105470198888841LL;
unsigned char var_3 = (unsigned char)49;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
unsigned long long int var_14 = 16393307695235746618ULL;
unsigned short var_15 = (unsigned short)43134;
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
