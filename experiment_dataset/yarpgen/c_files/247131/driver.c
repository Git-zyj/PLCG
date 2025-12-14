#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_1 = (signed char)52;
int var_4 = -1165253341;
short var_6 = (short)-23850;
unsigned short var_8 = (unsigned short)58086;
int var_9 = -1871691025;
short var_10 = (short)-16194;
int zero = 0;
int var_11 = -482498926;
unsigned char var_12 = (unsigned char)67;
unsigned char var_13 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
