#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned int var_1 = 2160162741U;
long long int var_4 = -3834773415801746987LL;
short var_8 = (short)-24224;
unsigned char var_12 = (unsigned char)255;
long long int var_13 = -6190972813104528008LL;
unsigned int var_14 = 4276768655U;
int zero = 0;
long long int var_16 = -2220526010408225666LL;
unsigned int var_17 = 197516060U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
