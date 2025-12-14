#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29461;
unsigned int var_11 = 2052676788U;
long long int var_15 = 7041948334401972101LL;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
unsigned long long int var_18 = 5195204332905619794ULL;
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
