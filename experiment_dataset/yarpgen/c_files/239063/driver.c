#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
unsigned char var_4 = (unsigned char)186;
short var_5 = (short)28524;
short var_7 = (short)29042;
short var_8 = (short)-24658;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
unsigned char var_12 = (unsigned char)168;
unsigned char var_13 = (unsigned char)173;
void init() {
}

void checksum() {
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
