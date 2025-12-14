#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-123;
unsigned char var_11 = (unsigned char)202;
unsigned int var_13 = 3734513054U;
unsigned char var_14 = (unsigned char)17;
int zero = 0;
unsigned char var_16 = (unsigned char)192;
unsigned long long int var_17 = 17673580048534139526ULL;
unsigned short var_18 = (unsigned short)45824;
signed char var_19 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
