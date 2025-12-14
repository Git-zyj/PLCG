#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7324444983533709469ULL;
unsigned short var_10 = (unsigned short)31201;
unsigned long long int var_14 = 6039163715082867585ULL;
int zero = 0;
unsigned long long int var_16 = 10563163157906195977ULL;
unsigned long long int var_17 = 13591292080067563297ULL;
long long int var_18 = 4645738229559547857LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
