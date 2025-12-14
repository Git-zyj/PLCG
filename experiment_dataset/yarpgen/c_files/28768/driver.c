#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -747140147;
signed char var_1 = (signed char)88;
unsigned char var_2 = (unsigned char)129;
unsigned short var_4 = (unsigned short)25969;
unsigned char var_5 = (unsigned char)111;
int var_8 = -1439194316;
unsigned short var_9 = (unsigned short)44082;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
unsigned short var_14 = (unsigned short)30882;
unsigned short var_15 = (unsigned short)29150;
unsigned char var_16 = (unsigned char)9;
unsigned int var_17 = 3758680174U;
unsigned char var_18 = (unsigned char)208;
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
