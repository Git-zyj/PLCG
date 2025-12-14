#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned long long int var_3 = 5850051695519748492ULL;
unsigned long long int var_4 = 15094393267900825047ULL;
unsigned long long int var_5 = 9053333011134290118ULL;
long long int var_12 = 2457421626847481584LL;
unsigned short var_13 = (unsigned short)42969;
int zero = 0;
unsigned int var_16 = 2045653293U;
unsigned long long int var_17 = 18408793510294270106ULL;
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
