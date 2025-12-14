#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)88;
unsigned char var_7 = (unsigned char)60;
int zero = 0;
unsigned long long int var_14 = 14400298589404857852ULL;
unsigned long long int var_15 = 3140000663007234609ULL;
unsigned long long int var_16 = 16776434727218961320ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
