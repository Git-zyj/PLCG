#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15520187870514080674ULL;
short var_7 = (short)-1736;
unsigned short var_11 = (unsigned short)55763;
unsigned char var_12 = (unsigned char)196;
int zero = 0;
unsigned long long int var_15 = 13988819270739600234ULL;
int var_16 = 26078761;
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
