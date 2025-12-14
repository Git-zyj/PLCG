#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
short var_1 = (short)-24727;
long long int var_2 = -4620419092958316753LL;
unsigned short var_3 = (unsigned short)36666;
unsigned short var_6 = (unsigned short)59992;
short var_7 = (short)32543;
unsigned char var_9 = (unsigned char)204;
short var_11 = (short)-8176;
unsigned int var_13 = 2071301134U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)13430;
unsigned long long int var_16 = 17810605121939678514ULL;
unsigned char var_17 = (unsigned char)184;
unsigned short var_18 = (unsigned short)1074;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
