#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1605000300U;
int var_2 = -759981881;
long long int var_4 = 391164233347602041LL;
unsigned char var_5 = (unsigned char)92;
short var_6 = (short)25630;
unsigned char var_7 = (unsigned char)41;
unsigned short var_8 = (unsigned short)64479;
int var_9 = -290101854;
short var_10 = (short)-2887;
short var_11 = (short)14539;
int var_12 = -1831264992;
unsigned short var_13 = (unsigned short)11302;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
unsigned short var_15 = (unsigned short)39738;
unsigned short var_16 = (unsigned short)1877;
unsigned int var_17 = 2645791168U;
unsigned short var_18 = (unsigned short)16466;
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
