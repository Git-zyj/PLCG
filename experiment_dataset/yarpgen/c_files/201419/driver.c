#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29366;
short var_5 = (short)-12702;
unsigned short var_6 = (unsigned short)10844;
unsigned short var_8 = (unsigned short)2320;
unsigned char var_9 = (unsigned char)168;
int zero = 0;
long long int var_12 = 2423951683776045322LL;
unsigned int var_13 = 4228380885U;
int var_14 = 216428157;
void init() {
}

void checksum() {
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
