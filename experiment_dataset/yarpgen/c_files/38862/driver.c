#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18702;
unsigned long long int var_1 = 7145523141419265168ULL;
unsigned short var_2 = (unsigned short)32262;
short var_5 = (short)-7782;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 2379458238801349500ULL;
short var_10 = (short)22352;
unsigned long long int var_12 = 16561267294781289722ULL;
int var_14 = 778654048;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13684235410565139336ULL;
unsigned char var_19 = (unsigned char)220;
short var_20 = (short)-2592;
void init() {
}

void checksum() {
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
