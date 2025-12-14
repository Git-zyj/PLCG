#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
long long int var_2 = 9091188766336907734LL;
unsigned short var_3 = (unsigned short)37960;
signed char var_4 = (signed char)27;
unsigned short var_10 = (unsigned short)20475;
int zero = 0;
signed char var_12 = (signed char)-89;
unsigned char var_13 = (unsigned char)242;
int var_14 = 207520089;
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
