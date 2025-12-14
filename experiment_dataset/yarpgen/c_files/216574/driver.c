#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
int var_2 = -1042631968;
int var_4 = 306044674;
unsigned short var_9 = (unsigned short)61996;
unsigned short var_10 = (unsigned short)40124;
unsigned short var_11 = (unsigned short)43718;
unsigned short var_14 = (unsigned short)56;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)96;
short var_19 = (short)-11112;
int var_20 = -1748412196;
unsigned char var_21 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
