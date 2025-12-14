#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21806;
int var_1 = -881569092;
unsigned short var_2 = (unsigned short)55182;
short var_3 = (short)10192;
unsigned short var_4 = (unsigned short)8760;
unsigned short var_5 = (unsigned short)34040;
unsigned short var_6 = (unsigned short)904;
unsigned long long int var_7 = 4725980125382538585ULL;
unsigned short var_8 = (unsigned short)25076;
int var_9 = 1209758602;
signed char var_10 = (signed char)108;
int var_13 = 1744755587;
signed char var_14 = (signed char)18;
int zero = 0;
unsigned int var_15 = 965119011U;
short var_16 = (short)-15508;
unsigned short var_17 = (unsigned short)7670;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
