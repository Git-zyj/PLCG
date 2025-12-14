#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)109;
short var_3 = (short)-7953;
unsigned long long int var_5 = 16438568970948066259ULL;
unsigned short var_7 = (unsigned short)42338;
unsigned char var_9 = (unsigned char)13;
int zero = 0;
unsigned long long int var_10 = 16645822363798026811ULL;
unsigned char var_11 = (unsigned char)90;
unsigned short var_12 = (unsigned short)54777;
unsigned char var_13 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
