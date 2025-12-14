#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21248;
signed char var_4 = (signed char)-79;
unsigned int var_5 = 3106786825U;
short var_6 = (short)-26289;
short var_9 = (short)16748;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
unsigned short var_12 = (unsigned short)27350;
unsigned short var_13 = (unsigned short)29715;
signed char var_14 = (signed char)-23;
int var_15 = -1834357901;
long long int var_16 = -293864919188934960LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
