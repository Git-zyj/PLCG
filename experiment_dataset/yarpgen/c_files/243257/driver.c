#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17865103992421198978ULL;
short var_2 = (short)-28140;
unsigned short var_3 = (unsigned short)63430;
short var_5 = (short)-21670;
unsigned long long int var_6 = 4063967390283346246ULL;
unsigned short var_7 = (unsigned short)8016;
long long int var_8 = 1338790110721650872LL;
unsigned short var_9 = (unsigned short)906;
short var_10 = (short)29863;
int zero = 0;
unsigned short var_12 = (unsigned short)29514;
short var_13 = (short)31491;
signed char var_14 = (signed char)32;
signed char var_15 = (signed char)-92;
short var_16 = (short)-14382;
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
