#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
short var_2 = (short)26819;
long long int var_5 = 1861558215230555086LL;
int var_6 = 710708307;
long long int var_10 = 2647529745961984959LL;
unsigned int var_13 = 3480004854U;
long long int var_14 = 1213153308467628531LL;
int zero = 0;
long long int var_17 = 4032824865585075418LL;
unsigned char var_18 = (unsigned char)52;
short var_19 = (short)-18925;
short var_20 = (short)26901;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
