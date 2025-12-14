#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
long long int var_3 = 2472991378418425103LL;
signed char var_4 = (signed char)70;
signed char var_7 = (signed char)35;
unsigned short var_10 = (unsigned short)47579;
unsigned char var_12 = (unsigned char)174;
unsigned char var_14 = (unsigned char)122;
unsigned short var_15 = (unsigned short)19329;
int zero = 0;
int var_16 = 1504993466;
unsigned char var_17 = (unsigned char)89;
short var_18 = (short)-11450;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
