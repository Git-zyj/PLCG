#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -489864342;
unsigned int var_1 = 2844088791U;
short var_2 = (short)-6199;
int var_3 = -1826980902;
unsigned short var_4 = (unsigned short)37420;
signed char var_6 = (signed char)-2;
unsigned long long int var_7 = 13650180236401835020ULL;
int var_8 = 402594851;
int var_9 = 335549692;
short var_10 = (short)19194;
int zero = 0;
unsigned int var_11 = 1267294970U;
unsigned int var_12 = 1979550299U;
unsigned short var_13 = (unsigned short)32678;
unsigned int var_14 = 3477639111U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
