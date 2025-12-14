#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2285;
short var_3 = (short)26220;
int var_5 = 415120962;
signed char var_6 = (signed char)48;
unsigned int var_8 = 189938383U;
unsigned char var_10 = (unsigned char)81;
unsigned int var_12 = 3679393259U;
unsigned short var_13 = (unsigned short)115;
signed char var_15 = (signed char)79;
int zero = 0;
int var_17 = 366881751;
unsigned short var_18 = (unsigned short)65515;
int var_19 = -1794000617;
void init() {
}

void checksum() {
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
