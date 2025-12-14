#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1454831854;
unsigned short var_5 = (unsigned short)53346;
unsigned int var_6 = 3687334236U;
unsigned long long int var_8 = 13281683491397357002ULL;
unsigned char var_17 = (unsigned char)73;
int zero = 0;
unsigned long long int var_19 = 17146858134572744953ULL;
unsigned char var_20 = (unsigned char)148;
int var_21 = -115771621;
void init() {
}

void checksum() {
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
