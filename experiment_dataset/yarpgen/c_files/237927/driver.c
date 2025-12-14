#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)116;
unsigned char var_3 = (unsigned char)223;
unsigned short var_8 = (unsigned short)52544;
unsigned char var_13 = (unsigned char)51;
int zero = 0;
unsigned int var_18 = 3006427027U;
unsigned short var_19 = (unsigned short)30124;
int var_20 = 1417454905;
void init() {
}

void checksum() {
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
