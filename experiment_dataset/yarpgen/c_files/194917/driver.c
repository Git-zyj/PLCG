#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1919266221;
long long int var_3 = 6353988906363677177LL;
int var_4 = 312698929;
unsigned char var_5 = (unsigned char)68;
signed char var_8 = (signed char)-15;
long long int var_9 = -8945310422550264484LL;
int zero = 0;
unsigned short var_10 = (unsigned short)42908;
short var_11 = (short)-16435;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
