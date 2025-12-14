#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_2 = (unsigned char)251;
int var_3 = 1434789813;
unsigned short var_4 = (unsigned short)32792;
short var_6 = (short)1250;
unsigned int var_10 = 834206816U;
unsigned short var_13 = (unsigned short)58379;
unsigned char var_14 = (unsigned char)156;
int zero = 0;
signed char var_15 = (signed char)-56;
unsigned int var_16 = 772601807U;
unsigned char var_17 = (unsigned char)97;
unsigned char var_18 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
