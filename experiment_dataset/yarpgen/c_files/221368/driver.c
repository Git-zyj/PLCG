#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8784628028808890656ULL;
unsigned char var_1 = (unsigned char)17;
int var_2 = -1212091274;
long long int var_4 = -6225765699731261475LL;
unsigned int var_11 = 4030979117U;
unsigned int var_13 = 1698536356U;
short var_14 = (short)-7410;
int zero = 0;
signed char var_16 = (signed char)-115;
short var_17 = (short)-5747;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
