#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)918;
unsigned short var_2 = (unsigned short)10576;
signed char var_4 = (signed char)-26;
signed char var_5 = (signed char)28;
unsigned long long int var_6 = 13865941155918274185ULL;
unsigned int var_12 = 86829871U;
unsigned short var_13 = (unsigned short)40112;
unsigned int var_15 = 1242529344U;
unsigned int var_16 = 3709523411U;
int zero = 0;
short var_17 = (short)-16527;
short var_18 = (short)8371;
unsigned short var_19 = (unsigned short)29041;
unsigned short var_20 = (unsigned short)1844;
void init() {
}

void checksum() {
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
