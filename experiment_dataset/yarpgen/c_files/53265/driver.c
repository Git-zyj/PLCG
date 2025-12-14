#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)23;
unsigned short var_5 = (unsigned short)33746;
unsigned char var_7 = (unsigned char)236;
signed char var_8 = (signed char)105;
unsigned char var_11 = (unsigned char)218;
unsigned short var_14 = (unsigned short)42071;
int zero = 0;
signed char var_16 = (signed char)-103;
unsigned char var_17 = (unsigned char)177;
unsigned char var_18 = (unsigned char)141;
unsigned char var_19 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
