#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39469;
signed char var_13 = (signed char)-114;
unsigned char var_14 = (unsigned char)148;
int zero = 0;
unsigned short var_19 = (unsigned short)20976;
unsigned short var_20 = (unsigned short)36000;
int var_21 = -1420183868;
short var_22 = (short)23004;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
