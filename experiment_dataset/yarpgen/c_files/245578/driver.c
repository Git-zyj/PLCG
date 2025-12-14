#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37611;
unsigned short var_2 = (unsigned short)2485;
unsigned short var_3 = (unsigned short)28019;
unsigned short var_4 = (unsigned short)21779;
signed char var_7 = (signed char)69;
int var_8 = -1058707787;
long long int var_12 = 1671969916744545645LL;
int zero = 0;
long long int var_13 = -6164669241417783073LL;
signed char var_14 = (signed char)57;
unsigned char var_15 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
