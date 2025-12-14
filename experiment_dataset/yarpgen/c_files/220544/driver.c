#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8717211923826021004LL;
unsigned long long int var_6 = 6113191300450519954ULL;
short var_9 = (short)-3602;
int zero = 0;
unsigned short var_14 = (unsigned short)27314;
unsigned short var_15 = (unsigned short)11304;
unsigned short var_16 = (unsigned short)6728;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
