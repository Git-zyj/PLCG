#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
signed char var_2 = (signed char)-68;
unsigned long long int var_11 = 13951778393364976587ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)42229;
unsigned short var_13 = (unsigned short)31054;
unsigned long long int var_14 = 16116975461523168865ULL;
int var_15 = -316582984;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
