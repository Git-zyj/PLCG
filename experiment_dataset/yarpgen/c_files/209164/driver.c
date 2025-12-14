#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14641855697603083049ULL;
unsigned long long int var_3 = 13199857087115519287ULL;
unsigned short var_7 = (unsigned short)19465;
long long int var_9 = 8105189910703236714LL;
unsigned long long int var_11 = 1282713010343630024ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)25;
short var_18 = (short)-13526;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
