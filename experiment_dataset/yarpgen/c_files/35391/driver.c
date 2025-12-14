#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)79;
int var_4 = 416493165;
signed char var_5 = (signed char)26;
int var_10 = -335670982;
unsigned long long int var_11 = 16653138365485799315ULL;
unsigned char var_12 = (unsigned char)76;
long long int var_13 = 1331484819711310090LL;
unsigned short var_14 = (unsigned short)54742;
unsigned int var_16 = 1902039417U;
int zero = 0;
long long int var_19 = 533749185495241738LL;
signed char var_20 = (signed char)75;
int var_21 = 1299985070;
short var_22 = (short)-23308;
void init() {
}

void checksum() {
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
