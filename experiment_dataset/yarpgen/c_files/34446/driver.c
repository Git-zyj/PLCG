#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
int var_1 = -646168559;
signed char var_4 = (signed char)-76;
unsigned char var_5 = (unsigned char)228;
int var_6 = -553289007;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
short var_15 = (short)21299;
short var_16 = (short)-21572;
short var_17 = (short)-27270;
short var_18 = (short)12453;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
