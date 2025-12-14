#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
short var_1 = (short)13316;
unsigned int var_2 = 2354688276U;
unsigned int var_4 = 1324638969U;
unsigned long long int var_8 = 6700020043050140150ULL;
short var_13 = (short)-29785;
unsigned char var_14 = (unsigned char)203;
unsigned int var_15 = 2698703886U;
int zero = 0;
unsigned char var_20 = (unsigned char)164;
int var_21 = -2101777707;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
