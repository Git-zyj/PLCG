#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28613;
unsigned short var_2 = (unsigned short)42866;
unsigned char var_3 = (unsigned char)227;
short var_8 = (short)-5739;
unsigned char var_9 = (unsigned char)189;
unsigned int var_15 = 3529111503U;
unsigned short var_17 = (unsigned short)32484;
int zero = 0;
unsigned char var_18 = (unsigned char)200;
unsigned short var_19 = (unsigned short)42822;
short var_20 = (short)588;
long long int var_21 = 1009734001293303618LL;
unsigned int var_22 = 4027090580U;
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
