#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned long long int var_2 = 5584342559084769247ULL;
unsigned short var_3 = (unsigned short)25653;
short var_4 = (short)32084;
unsigned char var_8 = (unsigned char)170;
unsigned long long int var_10 = 18131011184626572131ULL;
int var_11 = -1222676753;
unsigned short var_13 = (unsigned short)43336;
int zero = 0;
signed char var_14 = (signed char)-18;
unsigned long long int var_15 = 18108023073199807126ULL;
unsigned long long int var_16 = 11453958720048355368ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
