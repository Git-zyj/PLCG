#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
unsigned int var_2 = 3668424963U;
unsigned int var_4 = 1811368011U;
int var_5 = 1153952145;
short var_6 = (short)-17643;
unsigned long long int var_11 = 3920923231849110225ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)15;
short var_14 = (short)10851;
int var_15 = -1566029144;
void init() {
}

void checksum() {
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
