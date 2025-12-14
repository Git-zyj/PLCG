#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18115;
unsigned int var_5 = 749115060U;
unsigned short var_7 = (unsigned short)6931;
unsigned int var_8 = 2320492345U;
short var_9 = (short)7622;
unsigned int var_12 = 162227696U;
int zero = 0;
unsigned short var_16 = (unsigned short)34955;
short var_17 = (short)-14225;
unsigned int var_18 = 2327538569U;
unsigned int var_19 = 4270778109U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
