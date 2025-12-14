#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2531449940U;
short var_6 = (short)2039;
unsigned int var_11 = 841263640U;
unsigned short var_16 = (unsigned short)29395;
int zero = 0;
signed char var_18 = (signed char)-46;
signed char var_19 = (signed char)-92;
unsigned long long int var_20 = 17007752974872095102ULL;
signed char var_21 = (signed char)109;
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
