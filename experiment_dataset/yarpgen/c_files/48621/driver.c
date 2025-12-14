#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43884;
unsigned char var_2 = (unsigned char)169;
unsigned short var_5 = (unsigned short)64118;
unsigned char var_7 = (unsigned char)7;
unsigned char var_8 = (unsigned char)70;
int zero = 0;
unsigned short var_11 = (unsigned short)56951;
unsigned long long int var_12 = 813706035215963937ULL;
unsigned char var_13 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
