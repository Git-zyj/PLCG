#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)89;
short var_4 = (short)570;
short var_6 = (short)-14256;
signed char var_7 = (signed char)-92;
signed char var_8 = (signed char)65;
unsigned short var_10 = (unsigned short)23615;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
signed char var_13 = (signed char)47;
int var_14 = 1660793065;
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
