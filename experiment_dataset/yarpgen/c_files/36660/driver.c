#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1796391662572417162LL;
short var_3 = (short)1531;
unsigned char var_4 = (unsigned char)112;
signed char var_10 = (signed char)-26;
unsigned short var_11 = (unsigned short)10904;
int var_14 = -1115874157;
int zero = 0;
int var_16 = -1606359608;
int var_17 = -2026455704;
unsigned char var_18 = (unsigned char)207;
short var_19 = (short)-24390;
unsigned char var_20 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
