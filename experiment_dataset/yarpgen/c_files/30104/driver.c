#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-98;
unsigned char var_10 = (unsigned char)223;
int var_12 = -2056293708;
unsigned short var_13 = (unsigned short)35609;
unsigned int var_16 = 842477416U;
int zero = 0;
unsigned int var_19 = 2772587715U;
unsigned char var_20 = (unsigned char)47;
void init() {
}

void checksum() {
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
