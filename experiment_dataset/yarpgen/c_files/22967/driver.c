#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned short var_2 = (unsigned short)51152;
long long int var_3 = 6766471991633649993LL;
unsigned long long int var_4 = 4228136680730071180ULL;
unsigned char var_5 = (unsigned char)125;
short var_6 = (short)21886;
signed char var_7 = (signed char)-10;
unsigned long long int var_8 = 15544480752012116593ULL;
unsigned char var_9 = (unsigned char)126;
short var_10 = (short)-16641;
int var_11 = 1853682657;
unsigned short var_12 = (unsigned short)59954;
int var_13 = 1814270452;
unsigned int var_14 = 4181425556U;
int zero = 0;
signed char var_15 = (signed char)-79;
int var_16 = 58795005;
void init() {
}

void checksum() {
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
