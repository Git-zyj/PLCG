#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49148;
unsigned long long int var_5 = 16184722286270524546ULL;
unsigned char var_6 = (unsigned char)149;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
unsigned short var_19 = (unsigned short)46318;
unsigned long long int var_20 = 1750893256374653481ULL;
unsigned short var_21 = (unsigned short)56928;
unsigned char var_22 = (unsigned char)123;
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
