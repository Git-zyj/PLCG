#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3054644186860813360LL;
unsigned int var_4 = 1192335854U;
short var_16 = (short)-14722;
int zero = 0;
signed char var_20 = (signed char)104;
unsigned char var_21 = (unsigned char)75;
int var_22 = 1729117686;
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
