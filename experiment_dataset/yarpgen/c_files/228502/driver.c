#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)545;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)34333;
signed char var_7 = (signed char)102;
short var_8 = (short)-2995;
unsigned short var_9 = (unsigned short)14073;
signed char var_10 = (signed char)-69;
int zero = 0;
short var_13 = (short)-15651;
short var_14 = (short)30859;
short var_15 = (short)23726;
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
