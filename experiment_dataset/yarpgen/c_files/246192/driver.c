#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22149;
unsigned int var_4 = 1018430534U;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)35;
int var_9 = -1529653247;
unsigned char var_10 = (unsigned char)134;
int var_11 = -632308514;
short var_12 = (short)19370;
unsigned long long int var_17 = 18303379697568406479ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)15398;
int var_19 = 18257077;
long long int var_20 = -1700317405047164454LL;
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
