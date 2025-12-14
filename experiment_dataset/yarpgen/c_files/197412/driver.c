#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46774;
unsigned int var_3 = 3887280250U;
unsigned short var_5 = (unsigned short)2759;
int var_7 = -1328078241;
unsigned short var_8 = (unsigned short)17297;
unsigned char var_11 = (unsigned char)18;
int var_12 = -692998416;
unsigned int var_13 = 830537247U;
int zero = 0;
unsigned char var_17 = (unsigned char)58;
unsigned short var_18 = (unsigned short)38488;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
