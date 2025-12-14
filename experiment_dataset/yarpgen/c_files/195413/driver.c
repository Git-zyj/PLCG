#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)24;
unsigned short var_6 = (unsigned short)15248;
unsigned short var_13 = (unsigned short)25310;
unsigned short var_15 = (unsigned short)28467;
unsigned short var_17 = (unsigned short)57149;
int zero = 0;
unsigned char var_20 = (unsigned char)244;
short var_21 = (short)-25037;
unsigned char var_22 = (unsigned char)130;
signed char var_23 = (signed char)-1;
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
