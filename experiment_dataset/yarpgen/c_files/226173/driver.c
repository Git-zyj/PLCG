#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
int var_4 = -393941360;
int var_5 = -532106811;
short var_6 = (short)-2519;
int var_10 = -1373140132;
signed char var_11 = (signed char)-116;
int zero = 0;
unsigned int var_12 = 1542633659U;
unsigned short var_13 = (unsigned short)10400;
unsigned int var_14 = 2787041259U;
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
