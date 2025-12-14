#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1604310247;
int var_4 = 897151809;
unsigned long long int var_10 = 18423307866722314995ULL;
unsigned short var_11 = (unsigned short)54562;
signed char var_12 = (signed char)-81;
int zero = 0;
unsigned short var_20 = (unsigned short)18631;
unsigned long long int var_21 = 4533056845670123805ULL;
short var_22 = (short)-12508;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
