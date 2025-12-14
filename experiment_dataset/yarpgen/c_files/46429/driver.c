#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15506;
unsigned char var_7 = (unsigned char)211;
unsigned char var_17 = (unsigned char)43;
int zero = 0;
short var_18 = (short)25013;
unsigned char var_19 = (unsigned char)131;
unsigned char var_20 = (unsigned char)142;
int var_21 = -26802318;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
