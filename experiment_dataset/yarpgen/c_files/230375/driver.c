#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
unsigned char var_2 = (unsigned char)242;
unsigned short var_5 = (unsigned short)55268;
unsigned short var_7 = (unsigned short)22070;
unsigned long long int var_11 = 6994021789027343752ULL;
unsigned int var_12 = 3113969335U;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
unsigned char var_20 = (unsigned char)244;
signed char var_21 = (signed char)103;
unsigned int var_22 = 1744241433U;
short var_23 = (short)-32436;
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
