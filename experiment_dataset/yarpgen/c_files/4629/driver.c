#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56629;
unsigned long long int var_6 = 9558919125183865180ULL;
unsigned char var_8 = (unsigned char)93;
unsigned long long int var_10 = 2200743170236919057ULL;
unsigned char var_12 = (unsigned char)16;
unsigned short var_13 = (unsigned short)21754;
int var_14 = 1190357015;
short var_16 = (short)8534;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)244;
short var_19 = (short)-27404;
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
