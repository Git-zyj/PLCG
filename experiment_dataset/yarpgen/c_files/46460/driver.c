#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4032;
short var_4 = (short)-28003;
int var_6 = -1951874893;
short var_9 = (short)3100;
short var_10 = (short)26918;
unsigned short var_12 = (unsigned short)29102;
int zero = 0;
short var_13 = (short)11107;
unsigned short var_14 = (unsigned short)6806;
short var_15 = (short)-2251;
signed char var_16 = (signed char)-33;
unsigned char var_17 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
