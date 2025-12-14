#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65293;
int var_1 = -1986506278;
unsigned int var_3 = 1935274737U;
int var_4 = 306525768;
short var_5 = (short)18555;
int var_8 = -292669267;
signed char var_10 = (signed char)48;
short var_11 = (short)-12288;
int var_13 = -1720133487;
unsigned char var_14 = (unsigned char)78;
unsigned long long int var_15 = 11974383000670787817ULL;
int zero = 0;
int var_16 = -824814463;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16425813715078151092ULL;
unsigned short var_19 = (unsigned short)12754;
unsigned int var_20 = 446748174U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
