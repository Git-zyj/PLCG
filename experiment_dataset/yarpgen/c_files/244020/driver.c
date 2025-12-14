#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2608806934784877136LL;
signed char var_4 = (signed char)21;
short var_5 = (short)23457;
unsigned long long int var_10 = 5126409739020323057ULL;
unsigned char var_12 = (unsigned char)147;
int var_14 = 528727245;
unsigned int var_15 = 3742118100U;
int zero = 0;
unsigned long long int var_16 = 14699117987889411053ULL;
unsigned char var_17 = (unsigned char)156;
short var_18 = (short)6071;
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
