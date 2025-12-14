#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
signed char var_5 = (signed char)-112;
unsigned long long int var_7 = 4506568150301086048ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)18;
short var_11 = (short)2949;
unsigned char var_12 = (unsigned char)27;
unsigned char var_13 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
