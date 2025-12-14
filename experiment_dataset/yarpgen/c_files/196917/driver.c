#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2610929897326298883ULL;
short var_5 = (short)-2100;
unsigned long long int var_6 = 10807651251999510431ULL;
short var_10 = (short)24978;
unsigned short var_11 = (unsigned short)11846;
unsigned short var_12 = (unsigned short)32763;
signed char var_14 = (signed char)-23;
unsigned long long int var_15 = 8046385984503490874ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)22489;
unsigned char var_18 = (unsigned char)2;
int var_19 = 1475110817;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
