#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46445;
unsigned char var_2 = (unsigned char)228;
unsigned short var_3 = (unsigned short)51708;
unsigned int var_4 = 2823082198U;
unsigned long long int var_5 = 5212030701029926331ULL;
signed char var_7 = (signed char)88;
unsigned int var_8 = 1979311587U;
int var_9 = 210214470;
int var_10 = -60925944;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)30443;
signed char var_14 = (signed char)65;
short var_15 = (short)14131;
signed char var_16 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
