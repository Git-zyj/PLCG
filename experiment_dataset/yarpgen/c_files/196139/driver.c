#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned char var_1 = (unsigned char)73;
unsigned short var_3 = (unsigned short)10099;
unsigned char var_6 = (unsigned char)207;
int zero = 0;
short var_11 = (short)-4811;
signed char var_12 = (signed char)104;
unsigned short var_13 = (unsigned short)451;
long long int var_14 = 3619363836625845800LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
