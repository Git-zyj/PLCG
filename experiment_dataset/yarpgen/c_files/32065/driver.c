#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49880;
short var_2 = (short)3013;
int var_10 = 2032140344;
unsigned int var_11 = 335787776U;
signed char var_12 = (signed char)119;
short var_13 = (short)15071;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
signed char var_20 = (signed char)-38;
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
