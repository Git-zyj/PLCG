#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)70;
unsigned long long int var_10 = 12832936681931200973ULL;
unsigned char var_11 = (unsigned char)110;
unsigned short var_12 = (unsigned short)7526;
int var_16 = -711795760;
int zero = 0;
int var_19 = -1268781263;
signed char var_20 = (signed char)-52;
signed char var_21 = (signed char)-79;
short var_22 = (short)-4865;
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
