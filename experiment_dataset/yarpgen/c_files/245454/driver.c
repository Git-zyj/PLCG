#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
signed char var_3 = (signed char)98;
signed char var_5 = (signed char)(-127 - 1);
short var_8 = (short)17332;
short var_10 = (short)-15734;
signed char var_12 = (signed char)-13;
unsigned char var_14 = (unsigned char)173;
signed char var_17 = (signed char)89;
int zero = 0;
short var_19 = (short)-15819;
unsigned char var_20 = (unsigned char)82;
unsigned char var_21 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
