#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8079;
unsigned int var_5 = 207426121U;
unsigned int var_10 = 599495699U;
unsigned long long int var_11 = 16298028658238910993ULL;
long long int var_14 = 1084578141005490306LL;
int zero = 0;
int var_15 = -726236512;
unsigned short var_16 = (unsigned short)15165;
void init() {
}

void checksum() {
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
