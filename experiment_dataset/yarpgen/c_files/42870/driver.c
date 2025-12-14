#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7249;
unsigned int var_3 = 2388304431U;
long long int var_8 = 1339534450666422502LL;
int var_11 = 1587387660;
unsigned long long int var_14 = 552094769261718300ULL;
int zero = 0;
long long int var_17 = -133735319613285286LL;
short var_18 = (short)-8952;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
