#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3702143588U;
unsigned int var_1 = 3832952285U;
unsigned short var_2 = (unsigned short)62271;
unsigned short var_3 = (unsigned short)50708;
unsigned char var_5 = (unsigned char)161;
unsigned short var_6 = (unsigned short)11605;
unsigned long long int var_7 = 13386751096520052598ULL;
short var_8 = (short)-11224;
int zero = 0;
int var_10 = -1099715432;
unsigned short var_11 = (unsigned short)37096;
unsigned long long int var_12 = 5754259067108884634ULL;
unsigned int var_13 = 3828332110U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
