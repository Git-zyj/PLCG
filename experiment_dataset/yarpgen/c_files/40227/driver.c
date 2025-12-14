#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 2000331173;
short var_6 = (short)16172;
signed char var_7 = (signed char)-49;
unsigned char var_11 = (unsigned char)238;
unsigned char var_12 = (unsigned char)245;
short var_18 = (short)-29055;
int zero = 0;
unsigned char var_20 = (unsigned char)136;
short var_21 = (short)-2255;
void init() {
}

void checksum() {
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
