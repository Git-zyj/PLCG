#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned char var_2 = (unsigned char)98;
long long int var_4 = 4258550725178529356LL;
unsigned short var_7 = (unsigned short)54719;
unsigned char var_13 = (unsigned char)253;
unsigned int var_15 = 1507977715U;
int zero = 0;
unsigned char var_16 = (unsigned char)55;
short var_17 = (short)-44;
short var_18 = (short)20078;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
