#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-61;
unsigned char var_5 = (unsigned char)143;
unsigned short var_6 = (unsigned short)11426;
unsigned int var_11 = 2293116351U;
unsigned char var_12 = (unsigned char)148;
unsigned long long int var_13 = 12524834245792773712ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)54364;
signed char var_16 = (signed char)-93;
short var_17 = (short)-19803;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
