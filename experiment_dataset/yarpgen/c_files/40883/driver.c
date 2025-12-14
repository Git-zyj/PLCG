#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14173;
short var_3 = (short)-30186;
unsigned char var_7 = (unsigned char)29;
unsigned short var_9 = (unsigned short)7849;
unsigned int var_13 = 845740252U;
int zero = 0;
int var_14 = 764562800;
short var_15 = (short)10318;
signed char var_16 = (signed char)-126;
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
