#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-61;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)6;
unsigned int var_6 = 621365886U;
signed char var_7 = (signed char)-8;
unsigned char var_9 = (unsigned char)165;
unsigned int var_10 = 3109050869U;
unsigned char var_11 = (unsigned char)139;
long long int var_12 = 208088759910246365LL;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
unsigned long long int var_14 = 13838210843536530452ULL;
unsigned long long int var_15 = 8685947739593790285ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)9104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
