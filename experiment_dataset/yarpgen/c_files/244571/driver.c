#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1180665329;
unsigned short var_6 = (unsigned short)34310;
short var_7 = (short)-4395;
int var_10 = -1556680323;
unsigned short var_11 = (unsigned short)36711;
int zero = 0;
short var_19 = (short)8278;
unsigned char var_20 = (unsigned char)144;
unsigned char var_21 = (unsigned char)9;
short var_22 = (short)19588;
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
