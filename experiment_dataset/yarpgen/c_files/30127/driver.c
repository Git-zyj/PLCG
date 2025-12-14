#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 192838985U;
int var_1 = -425960569;
unsigned long long int var_2 = 16581719388197104052ULL;
signed char var_3 = (signed char)56;
unsigned short var_4 = (unsigned short)12605;
signed char var_6 = (signed char)68;
signed char var_8 = (signed char)50;
long long int var_10 = 5748394710366519615LL;
signed char var_12 = (signed char)100;
long long int var_13 = -8246104668961730005LL;
long long int var_14 = -466326831579880302LL;
unsigned short var_15 = (unsigned short)40008;
int zero = 0;
short var_16 = (short)19591;
long long int var_17 = 6903986021581966110LL;
unsigned short var_18 = (unsigned short)33970;
long long int var_19 = 9006500086173225733LL;
unsigned int var_20 = 3994128148U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
