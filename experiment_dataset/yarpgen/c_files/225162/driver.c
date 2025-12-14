#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52519;
unsigned long long int var_8 = 4399643463232495717ULL;
long long int var_14 = 3673839677207212811LL;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
signed char var_16 = (signed char)0;
unsigned char var_17 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
