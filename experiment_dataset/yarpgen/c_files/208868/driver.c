#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5481;
unsigned long long int var_4 = 2888628303491440669ULL;
unsigned int var_7 = 996912270U;
int zero = 0;
int var_13 = -647229204;
long long int var_14 = -8383859588440669853LL;
short var_15 = (short)-2559;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
