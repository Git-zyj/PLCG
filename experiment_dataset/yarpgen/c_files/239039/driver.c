#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1791357607U;
unsigned short var_1 = (unsigned short)24290;
short var_5 = (short)29456;
unsigned char var_11 = (unsigned char)126;
int zero = 0;
unsigned char var_15 = (unsigned char)93;
unsigned short var_16 = (unsigned short)14631;
long long int var_17 = 3553651593366110707LL;
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
