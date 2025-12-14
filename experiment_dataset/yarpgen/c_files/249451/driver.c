#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12318;
long long int var_5 = 649656412521150851LL;
unsigned short var_10 = (unsigned short)14863;
unsigned short var_11 = (unsigned short)22733;
long long int var_12 = -3194371465719502586LL;
int var_15 = 1238489080;
int var_16 = -593240349;
int zero = 0;
long long int var_20 = 7265497068489005824LL;
unsigned char var_21 = (unsigned char)43;
void init() {
}

void checksum() {
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
