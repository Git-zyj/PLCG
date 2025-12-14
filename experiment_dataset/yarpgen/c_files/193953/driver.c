#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55838;
short var_5 = (short)4418;
unsigned long long int var_6 = 8519118700442275604ULL;
unsigned long long int var_8 = 12821665083793924747ULL;
int var_9 = -50618698;
unsigned char var_12 = (unsigned char)100;
int zero = 0;
unsigned short var_13 = (unsigned short)9307;
unsigned long long int var_14 = 8447032612774642979ULL;
signed char var_15 = (signed char)-119;
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
