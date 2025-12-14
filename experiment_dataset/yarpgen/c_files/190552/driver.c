#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 925248801U;
short var_8 = (short)14145;
signed char var_10 = (signed char)-77;
short var_12 = (short)-25185;
short var_14 = (short)18828;
unsigned long long int var_16 = 6168506780609542027ULL;
unsigned short var_17 = (unsigned short)31756;
int zero = 0;
short var_19 = (short)-26333;
unsigned long long int var_20 = 2407689763442423688ULL;
signed char var_21 = (signed char)-79;
long long int var_22 = -8127475124245283896LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
