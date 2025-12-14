#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -62124025;
unsigned long long int var_6 = 15087970689671753509ULL;
short var_7 = (short)-23971;
unsigned char var_8 = (unsigned char)41;
short var_9 = (short)-9553;
unsigned short var_12 = (unsigned short)19936;
unsigned long long int var_15 = 8091598873125848204ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)53993;
short var_19 = (short)11451;
unsigned long long int var_20 = 8327725804681434271ULL;
unsigned short var_21 = (unsigned short)11168;
unsigned long long int var_22 = 4410388255944623605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
