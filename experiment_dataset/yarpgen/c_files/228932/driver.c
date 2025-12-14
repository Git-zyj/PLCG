#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5085;
signed char var_7 = (signed char)-32;
short var_8 = (short)18784;
short var_10 = (short)-7588;
int zero = 0;
unsigned char var_12 = (unsigned char)179;
signed char var_13 = (signed char)-68;
short var_14 = (short)-17963;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
