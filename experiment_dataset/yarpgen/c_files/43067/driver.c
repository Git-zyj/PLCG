#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)123;
unsigned short var_5 = (unsigned short)3493;
unsigned int var_6 = 3838401943U;
unsigned char var_8 = (unsigned char)242;
int zero = 0;
unsigned int var_10 = 3252045590U;
unsigned char var_11 = (unsigned char)222;
unsigned long long int var_12 = 11267780611462359970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
