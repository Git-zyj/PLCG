#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3222337606U;
short var_3 = (short)6755;
short var_4 = (short)3908;
signed char var_5 = (signed char)-42;
unsigned char var_6 = (unsigned char)232;
unsigned long long int var_7 = 17324635210842367139ULL;
short var_10 = (short)25060;
int zero = 0;
unsigned int var_12 = 3061228334U;
signed char var_13 = (signed char)-31;
unsigned short var_14 = (unsigned short)58800;
int var_15 = 1585303968;
void init() {
}

void checksum() {
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
