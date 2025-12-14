#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49395;
unsigned short var_2 = (unsigned short)29000;
unsigned short var_3 = (unsigned short)62840;
unsigned short var_4 = (unsigned short)28865;
unsigned short var_5 = (unsigned short)33738;
unsigned short var_6 = (unsigned short)48180;
unsigned short var_7 = (unsigned short)19667;
unsigned short var_9 = (unsigned short)9254;
int zero = 0;
unsigned short var_15 = (unsigned short)61476;
unsigned short var_16 = (unsigned short)59512;
unsigned short var_17 = (unsigned short)55026;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
