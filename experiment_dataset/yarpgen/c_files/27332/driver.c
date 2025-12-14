#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53792;
short var_4 = (short)-13478;
unsigned short var_6 = (unsigned short)55311;
short var_8 = (short)-23339;
int zero = 0;
unsigned long long int var_10 = 11480835502746870220ULL;
unsigned char var_11 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
