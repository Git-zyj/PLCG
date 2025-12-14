#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7059665079848738418LL;
signed char var_2 = (signed char)5;
unsigned char var_10 = (unsigned char)160;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
signed char var_17 = (signed char)114;
unsigned long long int var_18 = 9732989214033993974ULL;
unsigned char var_19 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
