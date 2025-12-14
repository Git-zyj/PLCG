#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)44173;
signed char var_7 = (signed char)65;
signed char var_10 = (signed char)-40;
unsigned long long int var_11 = 1920155045714385323ULL;
unsigned char var_15 = (unsigned char)219;
int zero = 0;
unsigned int var_18 = 613978907U;
unsigned char var_19 = (unsigned char)136;
short var_20 = (short)-22649;
unsigned char var_21 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
