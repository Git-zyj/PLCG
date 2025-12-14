#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9864;
int var_1 = 491676518;
long long int var_2 = 5365650699833902566LL;
short var_3 = (short)-4511;
short var_5 = (short)9363;
unsigned short var_6 = (unsigned short)34425;
int var_7 = 1572793146;
unsigned short var_8 = (unsigned short)22408;
int var_9 = -2142870223;
unsigned short var_10 = (unsigned short)64131;
signed char var_13 = (signed char)-73;
int zero = 0;
int var_14 = 1457072306;
unsigned int var_15 = 2143767314U;
unsigned short var_16 = (unsigned short)60395;
short var_17 = (short)4286;
unsigned short var_18 = (unsigned short)30536;
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
