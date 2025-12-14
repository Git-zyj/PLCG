#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned int var_4 = 2765474652U;
unsigned int var_5 = 2780380423U;
short var_6 = (short)-16727;
unsigned char var_7 = (unsigned char)202;
unsigned int var_8 = 701878256U;
int var_9 = -613651021;
int var_10 = 1872426820;
short var_11 = (short)-19529;
unsigned int var_12 = 2533456372U;
signed char var_15 = (signed char)-101;
unsigned short var_16 = (unsigned short)28838;
unsigned int var_17 = 2966240792U;
signed char var_18 = (signed char)-116;
int var_19 = -1135864207;
int zero = 0;
unsigned int var_20 = 184372019U;
unsigned char var_21 = (unsigned char)146;
short var_22 = (short)-23782;
short var_23 = (short)1417;
void init() {
}

void checksum() {
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
