#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
short var_1 = (short)-23994;
int var_3 = 238465628;
signed char var_4 = (signed char)-101;
_Bool var_5 = (_Bool)1;
long long int var_6 = 254794358083778461LL;
int var_8 = 672548933;
unsigned char var_11 = (unsigned char)16;
int var_12 = -1767668060;
signed char var_13 = (signed char)-36;
int zero = 0;
unsigned short var_15 = (unsigned short)40085;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
