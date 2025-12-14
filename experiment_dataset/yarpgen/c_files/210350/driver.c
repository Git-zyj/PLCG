#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62327;
int var_6 = 1209620470;
int var_8 = -22939586;
short var_10 = (short)-19146;
int var_11 = 797311108;
int zero = 0;
int var_13 = 106922435;
unsigned short var_14 = (unsigned short)28475;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
