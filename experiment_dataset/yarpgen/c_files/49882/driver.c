#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1255759445U;
unsigned int var_8 = 2485568277U;
short var_10 = (short)-8206;
int zero = 0;
short var_18 = (short)-6081;
unsigned char var_19 = (unsigned char)34;
int var_20 = -1721285895;
unsigned short var_21 = (unsigned short)39160;
int var_22 = 396388077;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
