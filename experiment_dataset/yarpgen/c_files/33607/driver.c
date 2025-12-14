#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23846;
short var_1 = (short)-11091;
short var_2 = (short)22779;
short var_4 = (short)14953;
short var_7 = (short)-6704;
unsigned char var_12 = (unsigned char)126;
unsigned char var_14 = (unsigned char)101;
int zero = 0;
unsigned char var_15 = (unsigned char)47;
short var_16 = (short)4996;
short var_17 = (short)-24457;
short var_18 = (short)24282;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
