#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1675923396033864726LL;
unsigned char var_5 = (unsigned char)117;
unsigned char var_11 = (unsigned char)66;
unsigned long long int var_12 = 6316037509274505985ULL;
int zero = 0;
long long int var_14 = 6351482792495209108LL;
unsigned short var_15 = (unsigned short)19412;
short var_16 = (short)18803;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
