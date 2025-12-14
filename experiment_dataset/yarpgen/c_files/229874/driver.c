#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_4 = (unsigned char)176;
signed char var_6 = (signed char)48;
short var_7 = (short)10912;
int var_12 = 1545474687;
unsigned int var_13 = 251634204U;
signed char var_17 = (signed char)116;
int zero = 0;
signed char var_20 = (signed char)-25;
unsigned long long int var_21 = 518154547824299484ULL;
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
