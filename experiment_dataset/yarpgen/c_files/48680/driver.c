#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1413333095;
int var_2 = 1251016000;
unsigned int var_4 = 361888514U;
short var_5 = (short)-1598;
unsigned int var_6 = 10593296U;
unsigned short var_8 = (unsigned short)21922;
unsigned char var_10 = (unsigned char)118;
short var_17 = (short)17198;
int var_18 = -2085798006;
int zero = 0;
signed char var_19 = (signed char)-23;
unsigned long long int var_20 = 823282195013516591ULL;
void init() {
}

void checksum() {
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
