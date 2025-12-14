#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5318;
signed char var_1 = (signed char)111;
unsigned char var_3 = (unsigned char)173;
unsigned char var_5 = (unsigned char)208;
signed char var_8 = (signed char)17;
unsigned char var_9 = (unsigned char)209;
short var_10 = (short)-6352;
unsigned int var_14 = 2199987621U;
int zero = 0;
unsigned char var_20 = (unsigned char)61;
unsigned char var_21 = (unsigned char)86;
signed char var_22 = (signed char)-23;
unsigned int var_23 = 252723055U;
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
