#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)6;
unsigned char var_11 = (unsigned char)227;
short var_12 = (short)-4421;
int var_14 = -326731442;
int zero = 0;
unsigned short var_18 = (unsigned short)45751;
unsigned short var_19 = (unsigned short)12658;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 18120381475380780448ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
