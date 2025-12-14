#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38130;
unsigned char var_1 = (unsigned char)159;
short var_4 = (short)-27296;
int var_5 = -451427327;
unsigned short var_7 = (unsigned short)54417;
unsigned long long int var_12 = 15875833765465942919ULL;
int zero = 0;
unsigned long long int var_16 = 4943251717171687387ULL;
unsigned short var_17 = (unsigned short)56590;
unsigned char var_18 = (unsigned char)236;
unsigned long long int var_19 = 3498406132297652321ULL;
short var_20 = (short)-5781;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
