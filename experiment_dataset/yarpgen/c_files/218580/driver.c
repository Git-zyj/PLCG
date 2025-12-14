#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4842;
unsigned char var_1 = (unsigned char)53;
unsigned char var_2 = (unsigned char)11;
unsigned int var_3 = 2589188599U;
unsigned short var_5 = (unsigned short)50813;
short var_11 = (short)-6613;
unsigned long long int var_12 = 12946326665772208018ULL;
int var_13 = -591914212;
short var_19 = (short)26624;
int zero = 0;
unsigned short var_20 = (unsigned short)24165;
unsigned char var_21 = (unsigned char)239;
long long int var_22 = -4783580929555268278LL;
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
