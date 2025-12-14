#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned short var_1 = (unsigned short)42226;
unsigned short var_2 = (unsigned short)51422;
short var_4 = (short)-5795;
int zero = 0;
unsigned char var_18 = (unsigned char)46;
unsigned char var_19 = (unsigned char)60;
short var_20 = (short)-5919;
unsigned short var_21 = (unsigned short)7758;
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
