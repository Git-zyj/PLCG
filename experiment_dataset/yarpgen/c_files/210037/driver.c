#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1812204725;
unsigned short var_7 = (unsigned short)9333;
signed char var_9 = (signed char)120;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
short var_12 = (short)-2177;
unsigned short var_13 = (unsigned short)721;
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
