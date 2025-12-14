#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned long long int var_3 = 9179915540594431213ULL;
unsigned char var_4 = (unsigned char)181;
long long int var_7 = -8228365504374838499LL;
int zero = 0;
int var_10 = 436220741;
unsigned int var_11 = 1753131861U;
unsigned long long int var_12 = 2986792116479408432ULL;
int var_13 = -112933460;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
