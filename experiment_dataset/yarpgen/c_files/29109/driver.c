#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29252;
unsigned short var_2 = (unsigned short)8848;
unsigned short var_3 = (unsigned short)29436;
unsigned int var_5 = 679824610U;
unsigned int var_6 = 518343285U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)187;
int var_9 = 1902542734;
unsigned char var_10 = (unsigned char)231;
int zero = 0;
unsigned long long int var_11 = 4046925360120935241ULL;
unsigned long long int var_12 = 762956043294641495ULL;
unsigned int var_13 = 1102504603U;
unsigned int var_14 = 1043297360U;
unsigned long long int var_15 = 13338599752193007504ULL;
unsigned int var_16 = 1371622681U;
unsigned short var_17 = (unsigned short)45747;
int var_18 = -1347906485;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
