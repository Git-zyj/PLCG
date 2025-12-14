#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13317385324455391381ULL;
long long int var_6 = 6364378563306019526LL;
unsigned char var_7 = (unsigned char)146;
short var_12 = (short)20720;
int zero = 0;
unsigned long long int var_15 = 8429198642207983026ULL;
unsigned short var_16 = (unsigned short)39582;
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
