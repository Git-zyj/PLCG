#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5281871299632435054ULL;
unsigned short var_3 = (unsigned short)17821;
unsigned int var_4 = 1990611492U;
unsigned int var_5 = 1585770205U;
short var_6 = (short)14109;
unsigned char var_7 = (unsigned char)124;
unsigned char var_8 = (unsigned char)73;
unsigned int var_9 = 867691057U;
unsigned long long int var_10 = 9223334645263901828ULL;
int zero = 0;
unsigned int var_11 = 1189730193U;
unsigned short var_12 = (unsigned short)61156;
long long int var_13 = -3811590443228959648LL;
unsigned short var_14 = (unsigned short)64617;
unsigned short var_15 = (unsigned short)43522;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
