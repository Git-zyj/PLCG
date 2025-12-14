#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28244;
int var_3 = -315169628;
unsigned char var_5 = (unsigned char)213;
unsigned int var_7 = 3714256968U;
int var_9 = -1151411232;
unsigned long long int var_10 = 2430543079123508994ULL;
unsigned short var_16 = (unsigned short)717;
unsigned short var_19 = (unsigned short)43942;
int zero = 0;
short var_20 = (short)-14774;
long long int var_21 = 2295402718390600887LL;
unsigned short var_22 = (unsigned short)62005;
void init() {
}

void checksum() {
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
