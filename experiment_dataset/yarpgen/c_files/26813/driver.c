#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
short var_2 = (short)13086;
short var_4 = (short)23139;
unsigned char var_5 = (unsigned char)231;
short var_7 = (short)16736;
short var_8 = (short)-24340;
unsigned char var_10 = (unsigned char)140;
unsigned char var_12 = (unsigned char)142;
unsigned char var_13 = (unsigned char)106;
int zero = 0;
short var_14 = (short)20312;
unsigned char var_15 = (unsigned char)184;
unsigned char var_16 = (unsigned char)147;
void init() {
}

void checksum() {
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
