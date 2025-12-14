#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-20272;
unsigned short var_12 = (unsigned short)16662;
unsigned long long int var_16 = 10729950191552077887ULL;
int zero = 0;
signed char var_19 = (signed char)-34;
int var_20 = -1446181316;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
