#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7317689333649848208LL;
long long int var_3 = -7251602112516676842LL;
unsigned char var_7 = (unsigned char)199;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)31373;
short var_12 = (short)16528;
unsigned char var_13 = (unsigned char)81;
int zero = 0;
unsigned short var_15 = (unsigned short)3125;
short var_16 = (short)7802;
short var_17 = (short)-29930;
unsigned char var_18 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
