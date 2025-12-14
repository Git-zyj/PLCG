#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46651;
unsigned short var_2 = (unsigned short)21427;
unsigned short var_4 = (unsigned short)7261;
unsigned char var_5 = (unsigned char)187;
unsigned char var_7 = (unsigned char)41;
signed char var_8 = (signed char)44;
signed char var_9 = (signed char)126;
int var_10 = 1425617540;
unsigned char var_12 = (unsigned char)88;
unsigned char var_13 = (unsigned char)18;
unsigned short var_15 = (unsigned short)18465;
unsigned char var_18 = (unsigned char)5;
int zero = 0;
unsigned char var_19 = (unsigned char)218;
int var_20 = -1358426073;
short var_21 = (short)3980;
unsigned char var_22 = (unsigned char)90;
unsigned short var_23 = (unsigned short)38533;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
