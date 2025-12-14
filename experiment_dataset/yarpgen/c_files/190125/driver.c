#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
short var_6 = (short)15158;
int var_10 = 646903793;
signed char var_14 = (signed char)-107;
unsigned short var_16 = (unsigned short)54656;
short var_17 = (short)4829;
int zero = 0;
unsigned short var_19 = (unsigned short)4544;
int var_20 = 863803159;
unsigned int var_21 = 788971261U;
unsigned int var_22 = 1207394153U;
unsigned short var_23 = (unsigned short)46666;
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
