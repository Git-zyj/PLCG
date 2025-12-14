#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40775;
unsigned char var_1 = (unsigned char)67;
unsigned short var_5 = (unsigned short)10885;
unsigned short var_14 = (unsigned short)29439;
short var_15 = (short)-24535;
long long int var_18 = 7909299703101682772LL;
int zero = 0;
unsigned short var_20 = (unsigned short)945;
unsigned int var_21 = 2438430777U;
short var_22 = (short)-15744;
void init() {
}

void checksum() {
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
