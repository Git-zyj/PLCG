#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4785;
long long int var_2 = -4138948658522462199LL;
unsigned short var_8 = (unsigned short)56027;
long long int var_10 = -2491300054867749202LL;
unsigned long long int var_11 = 9952016038370628329ULL;
unsigned short var_12 = (unsigned short)9160;
unsigned char var_13 = (unsigned char)56;
int zero = 0;
long long int var_16 = -4094972636798948902LL;
int var_17 = -1000031834;
int var_18 = -1141858318;
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
