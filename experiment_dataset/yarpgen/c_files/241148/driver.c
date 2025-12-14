#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
unsigned char var_15 = (unsigned char)238;
signed char var_16 = (signed char)-29;
int zero = 0;
long long int var_20 = -7116311661767216230LL;
unsigned long long int var_21 = 6908798223651966213ULL;
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
