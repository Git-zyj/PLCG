#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30261;
short var_2 = (short)11043;
unsigned char var_3 = (unsigned char)55;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-21420;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_14 = (short)4672;
short var_15 = (short)28615;
unsigned char var_16 = (unsigned char)230;
unsigned short var_17 = (unsigned short)19261;
short var_18 = (short)-18066;
unsigned short var_19 = (unsigned short)49718;
unsigned short var_20 = (unsigned short)51200;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
