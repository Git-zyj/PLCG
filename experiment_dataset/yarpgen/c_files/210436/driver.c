#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1838081333U;
unsigned short var_5 = (unsigned short)65321;
long long int var_7 = -5101467690471023051LL;
short var_8 = (short)-28767;
unsigned short var_10 = (unsigned short)29573;
unsigned char var_12 = (unsigned char)234;
int zero = 0;
unsigned long long int var_15 = 16599884175633501622ULL;
signed char var_16 = (signed char)-34;
unsigned char var_17 = (unsigned char)72;
short var_18 = (short)10515;
unsigned char var_19 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
