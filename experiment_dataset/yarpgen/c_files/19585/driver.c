#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
short var_4 = (short)8554;
unsigned char var_6 = (unsigned char)241;
int var_10 = -1526287295;
short var_11 = (short)-11365;
unsigned int var_14 = 3580879793U;
short var_16 = (short)30043;
int zero = 0;
int var_19 = 371809217;
unsigned long long int var_20 = 10553141012565188675ULL;
unsigned int var_21 = 2211092635U;
unsigned char var_22 = (unsigned char)184;
unsigned long long int var_23 = 1439710788127271659ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
