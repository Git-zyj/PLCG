#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
long long int var_4 = -6862163669571378518LL;
unsigned long long int var_14 = 7200942438827235499ULL;
int zero = 0;
unsigned long long int var_15 = 7365803610274296214ULL;
short var_16 = (short)2306;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
