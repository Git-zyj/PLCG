#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26564;
short var_3 = (short)-7644;
short var_5 = (short)-17769;
int var_11 = 48724792;
unsigned short var_12 = (unsigned short)8239;
int var_14 = 461313065;
int zero = 0;
int var_18 = -584655227;
short var_19 = (short)12137;
unsigned short var_20 = (unsigned short)4380;
int var_21 = -233395389;
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
