#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19182;
short var_1 = (short)-15168;
short var_2 = (short)-15756;
short var_7 = (short)-26222;
short var_8 = (short)9448;
int var_12 = 1664596394;
signed char var_13 = (signed char)-98;
int zero = 0;
unsigned short var_14 = (unsigned short)49078;
int var_15 = -1500896473;
unsigned int var_16 = 545206774U;
unsigned int var_17 = 539694877U;
int var_18 = 1051011083;
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
