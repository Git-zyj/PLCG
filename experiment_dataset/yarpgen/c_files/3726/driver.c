#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
unsigned char var_4 = (unsigned char)210;
unsigned long long int var_11 = 1513994066691616057ULL;
unsigned long long int var_14 = 16971210114496559407ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)57;
unsigned short var_17 = (unsigned short)9498;
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
