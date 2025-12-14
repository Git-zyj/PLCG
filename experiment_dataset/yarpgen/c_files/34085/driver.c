#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 213105493U;
unsigned long long int var_3 = 4100927732800091788ULL;
int var_13 = 1117566655;
unsigned short var_15 = (unsigned short)8660;
signed char var_16 = (signed char)58;
int zero = 0;
unsigned short var_20 = (unsigned short)12021;
unsigned short var_21 = (unsigned short)339;
unsigned char var_22 = (unsigned char)135;
unsigned char var_23 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
