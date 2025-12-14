#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2764767107U;
short var_10 = (short)-25275;
unsigned short var_12 = (unsigned short)56407;
unsigned short var_13 = (unsigned short)62277;
int zero = 0;
unsigned char var_14 = (unsigned char)248;
unsigned char var_15 = (unsigned char)162;
short var_16 = (short)-15856;
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
