#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1526049297;
long long int var_3 = 8756094449270939734LL;
unsigned long long int var_4 = 11112608826676869157ULL;
signed char var_6 = (signed char)75;
short var_7 = (short)-7333;
short var_10 = (short)-79;
short var_11 = (short)15279;
unsigned int var_12 = 3349449919U;
int zero = 0;
unsigned char var_15 = (unsigned char)157;
unsigned char var_16 = (unsigned char)105;
unsigned int var_17 = 4176435110U;
void init() {
}

void checksum() {
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
