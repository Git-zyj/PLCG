#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8063667958645566519LL;
long long int var_6 = 8361122030736197342LL;
int zero = 0;
short var_14 = (short)-17202;
unsigned short var_15 = (unsigned short)40501;
unsigned short var_16 = (unsigned short)32662;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
