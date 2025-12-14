#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3037183381597178705LL;
unsigned char var_5 = (unsigned char)35;
short var_8 = (short)-20720;
long long int var_11 = -6814530825782211147LL;
int var_13 = 890014671;
int var_17 = 696338655;
int zero = 0;
short var_18 = (short)10170;
unsigned short var_19 = (unsigned short)45358;
long long int var_20 = 6728680075736785259LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
