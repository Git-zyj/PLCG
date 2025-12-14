#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
long long int var_3 = 6014070865882275184LL;
signed char var_10 = (signed char)22;
short var_12 = (short)-16752;
unsigned char var_13 = (unsigned char)250;
int var_18 = 1298165034;
int zero = 0;
unsigned int var_20 = 2845386588U;
unsigned int var_21 = 1812545056U;
unsigned long long int var_22 = 6859033387775187484ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
