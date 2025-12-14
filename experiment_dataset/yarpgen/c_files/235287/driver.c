#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18232;
signed char var_1 = (signed char)-111;
unsigned char var_3 = (unsigned char)142;
signed char var_8 = (signed char)-61;
long long int var_12 = 8367392606021268192LL;
int zero = 0;
short var_13 = (short)28158;
short var_14 = (short)32506;
void init() {
}

void checksum() {
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
