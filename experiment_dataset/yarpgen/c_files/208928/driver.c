#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9141300724205711266LL;
signed char var_5 = (signed char)-124;
short var_7 = (short)-24775;
short var_11 = (short)13059;
signed char var_12 = (signed char)-117;
int zero = 0;
unsigned int var_13 = 2641703270U;
unsigned long long int var_14 = 13485261381727504398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
