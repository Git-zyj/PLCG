#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4673964803857695513LL;
signed char var_11 = (signed char)126;
unsigned short var_16 = (unsigned short)29290;
int zero = 0;
unsigned long long int var_20 = 16653361548987545964ULL;
short var_21 = (short)26337;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
