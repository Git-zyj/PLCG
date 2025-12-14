#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1799;
unsigned char var_7 = (unsigned char)203;
int var_13 = 1052995068;
int zero = 0;
unsigned short var_20 = (unsigned short)29987;
short var_21 = (short)32169;
unsigned int var_22 = 966563384U;
int var_23 = 1458463195;
void init() {
}

void checksum() {
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
