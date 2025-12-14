#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2145448408;
signed char var_3 = (signed char)-88;
unsigned char var_5 = (unsigned char)187;
signed char var_6 = (signed char)-52;
unsigned char var_8 = (unsigned char)186;
int zero = 0;
unsigned short var_12 = (unsigned short)34533;
int var_13 = 144366833;
int var_14 = -573521119;
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
