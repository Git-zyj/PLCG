#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7115;
short var_2 = (short)-1260;
signed char var_3 = (signed char)74;
unsigned char var_4 = (unsigned char)230;
unsigned char var_6 = (unsigned char)200;
short var_11 = (short)16137;
int zero = 0;
unsigned short var_12 = (unsigned short)17999;
unsigned char var_13 = (unsigned char)66;
int var_14 = 764608292;
long long int var_15 = -7906148745954411997LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
