#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 223463958;
int var_3 = 1027405370;
unsigned char var_10 = (unsigned char)46;
int var_14 = -888764172;
unsigned short var_15 = (unsigned short)11137;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
unsigned long long int var_20 = 3232784885141549769ULL;
int var_21 = 1934832880;
unsigned short var_22 = (unsigned short)33335;
unsigned char var_23 = (unsigned char)146;
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
