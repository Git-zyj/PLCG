#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14479;
short var_2 = (short)12429;
long long int var_5 = 6814469822894036237LL;
unsigned long long int var_7 = 5881109842111496587ULL;
unsigned short var_8 = (unsigned short)606;
unsigned char var_9 = (unsigned char)233;
unsigned int var_10 = 2995122781U;
unsigned int var_12 = 1941458664U;
int zero = 0;
unsigned long long int var_13 = 16188435675546129779ULL;
short var_14 = (short)-19193;
unsigned short var_15 = (unsigned short)39069;
short var_16 = (short)6082;
long long int var_17 = 1554241333185478490LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
