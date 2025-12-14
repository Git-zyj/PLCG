#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18283;
unsigned int var_3 = 2061143879U;
signed char var_4 = (signed char)47;
unsigned long long int var_5 = 8839708337752565309ULL;
unsigned short var_6 = (unsigned short)33278;
unsigned short var_7 = (unsigned short)23266;
unsigned short var_8 = (unsigned short)10170;
short var_11 = (short)-29740;
short var_13 = (short)-13349;
unsigned short var_16 = (unsigned short)38275;
int zero = 0;
int var_17 = -1063069315;
unsigned short var_18 = (unsigned short)25744;
unsigned short var_19 = (unsigned short)228;
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
