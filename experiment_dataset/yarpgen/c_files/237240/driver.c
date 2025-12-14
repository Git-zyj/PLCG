#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15420;
short var_5 = (short)3644;
signed char var_11 = (signed char)-102;
int zero = 0;
unsigned char var_19 = (unsigned char)149;
unsigned short var_20 = (unsigned short)34559;
short var_21 = (short)-15617;
short var_22 = (short)-15765;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
