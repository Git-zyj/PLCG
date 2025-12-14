#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)7;
unsigned int var_7 = 576903989U;
unsigned short var_8 = (unsigned short)10383;
int zero = 0;
long long int var_11 = 426099303785287318LL;
unsigned short var_12 = (unsigned short)34576;
short var_13 = (short)-22225;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
