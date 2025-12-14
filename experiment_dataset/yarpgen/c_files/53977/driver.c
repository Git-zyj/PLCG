#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)18984;
unsigned char var_7 = (unsigned char)78;
unsigned short var_14 = (unsigned short)7786;
int zero = 0;
unsigned short var_18 = (unsigned short)56259;
unsigned short var_19 = (unsigned short)35361;
unsigned char var_20 = (unsigned char)207;
unsigned char var_21 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
