#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16832811608319235257ULL;
unsigned char var_4 = (unsigned char)9;
int zero = 0;
signed char var_11 = (signed char)21;
long long int var_12 = -1885546175860553965LL;
unsigned long long int var_13 = 11101633315038210746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
