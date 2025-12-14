#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16156248491978344813ULL;
unsigned long long int var_6 = 3634867475329316583ULL;
unsigned long long int var_7 = 14465661715149281804ULL;
short var_9 = (short)-11736;
unsigned long long int var_14 = 17091804558995532679ULL;
short var_16 = (short)-25596;
unsigned long long int var_19 = 16400741704253383126ULL;
int zero = 0;
unsigned long long int var_20 = 8286672979543711219ULL;
unsigned long long int var_21 = 12683313274790112598ULL;
unsigned long long int var_22 = 1302133215495889767ULL;
unsigned long long int var_23 = 11940717471207872954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
