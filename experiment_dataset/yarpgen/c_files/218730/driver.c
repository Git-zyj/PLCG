#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12908;
long long int var_14 = 5660859611558211051LL;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
unsigned short var_20 = (unsigned short)56560;
long long int var_21 = 2384336799220948402LL;
unsigned long long int var_22 = 17316097117479411788ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
