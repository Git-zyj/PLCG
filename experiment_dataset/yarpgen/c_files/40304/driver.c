#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56969;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-18084;
unsigned int var_7 = 1222435453U;
long long int var_9 = 8843846206391308258LL;
short var_10 = (short)-3352;
unsigned int var_13 = 2589434568U;
int zero = 0;
unsigned char var_14 = (unsigned char)15;
signed char var_15 = (signed char)-87;
_Bool var_16 = (_Bool)0;
int var_17 = -1153813730;
unsigned char var_18 = (unsigned char)0;
void init() {
}

void checksum() {
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
