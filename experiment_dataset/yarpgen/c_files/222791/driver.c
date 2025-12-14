#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
signed char var_4 = (signed char)-119;
unsigned char var_5 = (unsigned char)181;
unsigned short var_6 = (unsigned short)591;
unsigned short var_10 = (unsigned short)46327;
unsigned char var_13 = (unsigned char)43;
unsigned char var_16 = (unsigned char)234;
short var_17 = (short)-15361;
int zero = 0;
long long int var_19 = -5780891633726299988LL;
unsigned short var_20 = (unsigned short)35276;
unsigned short var_21 = (unsigned short)17939;
long long int var_22 = 5993100021475051373LL;
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
