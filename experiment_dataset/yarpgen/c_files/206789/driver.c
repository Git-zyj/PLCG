#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21641;
short var_1 = (short)4878;
short var_4 = (short)15632;
unsigned short var_5 = (unsigned short)17153;
long long int var_6 = -1653929636554374810LL;
unsigned long long int var_8 = 304540359669084783ULL;
unsigned short var_9 = (unsigned short)4534;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 16592092226808156343ULL;
unsigned short var_12 = (unsigned short)41795;
short var_13 = (short)9295;
unsigned long long int var_14 = 9955834493241822180ULL;
short var_15 = (short)-22708;
unsigned short var_16 = (unsigned short)65239;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
