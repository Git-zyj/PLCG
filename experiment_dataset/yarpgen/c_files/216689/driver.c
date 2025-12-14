#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57898;
unsigned short var_2 = (unsigned short)55362;
unsigned short var_4 = (unsigned short)33123;
short var_5 = (short)-12778;
signed char var_7 = (signed char)18;
unsigned long long int var_8 = 1322338987731849940ULL;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
unsigned short var_10 = (unsigned short)7133;
signed char var_11 = (signed char)-77;
signed char var_12 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
