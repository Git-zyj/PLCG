#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36031;
signed char var_1 = (signed char)-9;
short var_4 = (short)-7231;
signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_9 = 15609866601053661458ULL;
int zero = 0;
unsigned long long int var_11 = 15812407847538888525ULL;
long long int var_12 = -7286473221258976523LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
