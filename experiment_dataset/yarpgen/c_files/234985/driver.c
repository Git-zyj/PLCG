#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -437733863;
short var_2 = (short)-136;
int var_3 = 828654514;
int var_4 = 1985495336;
unsigned int var_5 = 871391350U;
unsigned char var_7 = (unsigned char)49;
short var_8 = (short)-17479;
int zero = 0;
short var_10 = (short)-1624;
short var_11 = (short)15512;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
