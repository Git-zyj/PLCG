#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3763834391U;
short var_3 = (short)378;
unsigned long long int var_8 = 17222655608371036711ULL;
unsigned char var_10 = (unsigned char)54;
int zero = 0;
int var_12 = 1500939124;
signed char var_13 = (signed char)-37;
int var_14 = -226256813;
signed char var_15 = (signed char)44;
short var_16 = (short)17759;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
