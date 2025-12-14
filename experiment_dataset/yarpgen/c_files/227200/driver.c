#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
short var_3 = (short)-117;
unsigned int var_5 = 4005221167U;
short var_6 = (short)11902;
signed char var_8 = (signed char)-86;
int zero = 0;
unsigned short var_13 = (unsigned short)54591;
unsigned long long int var_14 = 10615404767773192899ULL;
signed char var_15 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
